#include <RcppArmadillo.h>
using namespace Rcpp;

#include <vector>

#include "function_pointers.h"
#include "utils.h"
#include "likelihood_estimator.h"
#include "likelihood_maker.h"


// [[Rcpp::export]]
List do_importance_sampler(const List &model,
                           const List &algorithm)
{

  // unsigned int number_of_points = algorithm["number_of_points"];
  //
  // // Work out the number of batches to simulate.
  // // We will store the points and the auxiliary variables in files to avoid memory problems.
  // //List inputs = model["inputs"];
  // //IntegerVector parameter_index = model["parameter_index"];
  // List observed_data = model["observed_data"];
  // //unsigned int inputs_dimension = inputs.length();
  // //unsigned int auxiliary_variables_dimension = algorithm["auxiliary_variables_dimension"];
  // //unsigned int total_dimension = inputs_dimension;// + auxiliary_variables_dimension;
  // //unsigned int number_of_batches_minus_one = floor(double(number_of_points*total_dimension-1)/max_vector_size);
  //
  // // Do the simulation.
  // SEXP simulate_proposal_SEXP = algorithm["simulate_proposal"];
  // SimulateDistributionPtr simulate_proposal = load_simulate_distribution(simulate_proposal_SEXP);
  //
  // std::vector<List> proposed_points;
  // proposed_points.reserve(number_of_points);
  // for (unsigned int i=0; i<number_of_points; ++i)
  // {
  //   proposed_points.push_back(simulate_proposal());
  //   //NumericVector proposed_inputs_row = inputs;
  //   //proposed_inputs_row[parameter_index] = proposed_point;
  //   //proposed_points(i,_) = proposed_point;
  //   //proposed_inputs(i,_) = proposed_inputs_row;
  // }
  //
  // LikelihoodEstimator* likelihood_estimator = make_likelihood_estimator(model, algorithm);
  //
  // std::vector<List> proposed_auxiliary_variables;
  // proposed_auxiliary_variables.reserve(number_of_points);
  //
  // for (std::vector<List>::const_iterator i=proposed_points.begin(); i!=proposed_points.end(); ++i)
  // {
  //   proposed_auxiliary_variables.push_back(likelihood_estimator->simulate_auxiliary_variables(*i));
  // }
  //
  // likelihood_estimator->is_setup_likelihood_estimator(proposed_points,
  //                                                     proposed_auxiliary_variables);
  //
  // arma::colvec log_weights(number_of_points);
  // bool prior_is_proposal = algorithm["prior_is_proposal"];
  // if (prior_is_proposal==TRUE)
  // {
  //   for (unsigned int i=0; i<number_of_points; ++i)
  //   {
  //     log_weights[i] = likelihood_estimator->estimate_log_likelihood(proposed_points[i], proposed_auxiliary_variables[i]);
  //   }
  // }
  // else
  // {
  //   SEXP evaluate_log_prior_SEXP = model["evaluate_log_prior"];
  //   EvaluateLogDistributionPtr evaluate_log_prior = load_evaluate_log_distribution(evaluate_log_prior_SEXP);
  //
  //   SEXP evaluate_log_proposal_SEXP = algorithm["evaluate_log_proposal"];
  //   EvaluateLogDistributionPtr evaluate_log_proposal = load_evaluate_log_distribution(evaluate_log_proposal_SEXP);
  //
  //   for (unsigned int i=0; i<number_of_points; ++i)
  //   {
  //     log_weights[i] = likelihood_estimator->estimate_log_likelihood(proposed_points[i], proposed_auxiliary_variables[i]) + evaluate_log_prior(proposed_points[i]) - evaluate_log_proposal(proposed_points[i]);
  //   }
  // }
  //
  // if (likelihood_estimator != NULL)
  //   delete likelihood_estimator;
  //
  // return List::create(Named("proposed_points") = proposed_points,
  //                     Named("proposed_auxiliary_variables") = wrap(proposed_auxiliary_variables),
  //                     Named("log_weights") = log_weights,
  //                     Named("log_normalising_constant") = log_sum_exp(log_weights));

  return List::create();
  // }
  // else
  // {
  //   throw Rcpp::exception("Cannot yet deal with multiple batches.");
  // }

}
