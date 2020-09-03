#include "abc_likelihood.h"
#include "utils.h"


ABCLikelihood::ABCLikelihood()
{
}

ABCLikelihood::ABCLikelihood(const EvaluateLogABCKernelPtr &evaluate_log_abc_kernel_in,
                             const SummaryStatisticsPtr &summary_statistics_in,
                             const double &abc_tolerance_in,
                             const NumericVector &summary_statistics_scaling_in,
                             const NumericVector &data_in)
{
  this->evaluate_log_abc_kernel = evaluate_log_abc_kernel_in;
  this->summary_statistics = summary_statistics_in;
  this->abc_tolerance = abc_tolerance_in;
  this->summary_data = this->summary_statistics(data_in);
}

ABCLikelihood::ABCLikelihood(const ABCLikelihood &another)
{
  this->MakeCopy(another);
}

ABCLikelihood::~ABCLikelihood()
{

}

void ABCLikelihood::operator=(const ABCLikelihood &another)
{
  if(this == &another){ //if a==a
    return;
  }

  this->MakeCopy(another);
}

void ABCLikelihood::MakeCopy(const ABCLikelihood &another)
{
  this->abc_tolerance = another.abc_tolerance;
  this->evaluate_log_abc_kernel = another.evaluate_log_abc_kernel;
  this->summary_statistics = another.summary_statistics;
  this->summary_statistics_scaling = another.summary_statistics_scaling;
  this->summary_data = another.summary_data;
}

double ABCLikelihood::evaluate(const NumericVector &simulated_data) const
{
  return this->evaluate_log_abc_kernel(this->summary_statistics_scaling * this->summary_statistics(simulated_data),
                                       this->summary_statistics_scaling * this->summary_data,
                                       this->abc_tolerance);
}

NumericVector ABCLikelihood::get_summary_data() const
{
  return this->summary_data;
}

SummaryStatisticsPtr ABCLikelihood::get_summary_statistics() const
{
  return this->summary_statistics;
}

void ABCLikelihood::set_abc_tolerance(const double &abc_tolerance_in)
{
  this->abc_tolerance = abc_tolerance_in;
}

void ABCLikelihood::set_summary_statistics_scaling(const NumericVector &summary_statistics_scaling_in)
{
  this->summary_statistics_scaling = summary_statistics_scaling_in;
}