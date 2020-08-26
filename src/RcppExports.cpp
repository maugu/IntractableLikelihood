// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// simulate_distribution_cpp
NumericVector simulate_distribution_cpp(const SEXP& simulate_distribution_SEXP);
RcppExport SEXP _ilike_simulate_distribution_cpp(SEXP simulate_distribution_SEXPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type simulate_distribution_SEXP(simulate_distribution_SEXPSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_distribution_cpp(simulate_distribution_SEXP));
    return rcpp_result_gen;
END_RCPP
}
// evaluate_log_distribution_cpp
double evaluate_log_distribution_cpp(const SEXP& evaluate_log_distribution_SEXP, const NumericVector& parameter);
RcppExport SEXP _ilike_evaluate_log_distribution_cpp(SEXP evaluate_log_distribution_SEXPSEXP, SEXP parameterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type evaluate_log_distribution_SEXP(evaluate_log_distribution_SEXPSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type parameter(parameterSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluate_log_distribution_cpp(evaluate_log_distribution_SEXP, parameter));
    return rcpp_result_gen;
END_RCPP
}
// evaluate_log_likelihood_cpp
double evaluate_log_likelihood_cpp(const SEXP& evaluate_log_likelihood_SEXP, const NumericVector& parameter, const NumericVector& data);
RcppExport SEXP _ilike_evaluate_log_likelihood_cpp(SEXP evaluate_log_likelihood_SEXPSEXP, SEXP parameterSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type evaluate_log_likelihood_SEXP(evaluate_log_likelihood_SEXPSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type parameter(parameterSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluate_log_likelihood_cpp(evaluate_log_likelihood_SEXP, parameter, data));
    return rcpp_result_gen;
END_RCPP
}
// estimate_log_likelihood_cpp
double estimate_log_likelihood_cpp(const SEXP& estimate_log_likelihood_SEXP, const NumericVector& parameter, const NumericVector& data, const List& auxiliary_variables);
RcppExport SEXP _ilike_estimate_log_likelihood_cpp(SEXP estimate_log_likelihood_SEXPSEXP, SEXP parameterSEXP, SEXP dataSEXP, SEXP auxiliary_variablesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type estimate_log_likelihood_SEXP(estimate_log_likelihood_SEXPSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type parameter(parameterSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const List& >::type auxiliary_variables(auxiliary_variablesSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_log_likelihood_cpp(estimate_log_likelihood_SEXP, parameter, data, auxiliary_variables));
    return rcpp_result_gen;
END_RCPP
}
// simulate_model_cpp
List simulate_model_cpp(const SEXP& simulate_model_SEXP, const NumericVector& parameter, const NumericVector& data);
RcppExport SEXP _ilike_simulate_model_cpp(SEXP simulate_model_SEXPSEXP, SEXP parameterSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type simulate_model_SEXP(simulate_model_SEXPSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type parameter(parameterSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_model_cpp(simulate_model_SEXP, parameter, data));
    return rcpp_result_gen;
END_RCPP
}
// simulate_auxiliary_variables_cpp
List simulate_auxiliary_variables_cpp(const SEXP& simulate_auxiliary_variables_SEXP, const NumericVector& parameter, const NumericVector& data);
RcppExport SEXP _ilike_simulate_auxiliary_variables_cpp(SEXP simulate_auxiliary_variables_SEXPSEXP, SEXP parameterSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type simulate_auxiliary_variables_SEXP(simulate_auxiliary_variables_SEXPSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type parameter(parameterSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_auxiliary_variables_cpp(simulate_auxiliary_variables_SEXP, parameter, data));
    return rcpp_result_gen;
END_RCPP
}
// evaluate_log_abc_kernel_cpp
double evaluate_log_abc_kernel_cpp(const SEXP& evaluate_log_abc_kernel_SEXP, const NumericVector& simulated_data, const NumericVector& data, const NumericVector& tolerances);
RcppExport SEXP _ilike_evaluate_log_abc_kernel_cpp(SEXP evaluate_log_abc_kernel_SEXPSEXP, SEXP simulated_dataSEXP, SEXP dataSEXP, SEXP tolerancesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type evaluate_log_abc_kernel_SEXP(evaluate_log_abc_kernel_SEXPSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type simulated_data(simulated_dataSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type tolerances(tolerancesSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluate_log_abc_kernel_cpp(evaluate_log_abc_kernel_SEXP, simulated_data, data, tolerances));
    return rcpp_result_gen;
END_RCPP
}
// summary_statistic_cpp
NumericVector summary_statistic_cpp(const SEXP& summary_statistic_SEXP, const NumericVector& data);
RcppExport SEXP _ilike_summary_statistic_cpp(SEXP summary_statistic_SEXPSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type summary_statistic_SEXP(summary_statistic_SEXPSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(summary_statistic_cpp(summary_statistic_SEXP, data));
    return rcpp_result_gen;
END_RCPP
}
// do_importance_sampler_cpp
List do_importance_sampler_cpp(const unsigned int& number_of_points, const List& model, const List& algorithm, const unsigned int& max_vector_size);
RcppExport SEXP _ilike_do_importance_sampler_cpp(SEXP number_of_pointsSEXP, SEXP modelSEXP, SEXP algorithmSEXP, SEXP max_vector_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned int& >::type number_of_points(number_of_pointsSEXP);
    Rcpp::traits::input_parameter< const List& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const List& >::type algorithm(algorithmSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type max_vector_size(max_vector_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(do_importance_sampler_cpp(number_of_points, model, algorithm, max_vector_size));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ilike_simulate_distribution_cpp", (DL_FUNC) &_ilike_simulate_distribution_cpp, 1},
    {"_ilike_evaluate_log_distribution_cpp", (DL_FUNC) &_ilike_evaluate_log_distribution_cpp, 2},
    {"_ilike_evaluate_log_likelihood_cpp", (DL_FUNC) &_ilike_evaluate_log_likelihood_cpp, 3},
    {"_ilike_estimate_log_likelihood_cpp", (DL_FUNC) &_ilike_estimate_log_likelihood_cpp, 4},
    {"_ilike_simulate_model_cpp", (DL_FUNC) &_ilike_simulate_model_cpp, 3},
    {"_ilike_simulate_auxiliary_variables_cpp", (DL_FUNC) &_ilike_simulate_auxiliary_variables_cpp, 3},
    {"_ilike_evaluate_log_abc_kernel_cpp", (DL_FUNC) &_ilike_evaluate_log_abc_kernel_cpp, 4},
    {"_ilike_summary_statistic_cpp", (DL_FUNC) &_ilike_summary_statistic_cpp, 2},
    {"_ilike_do_importance_sampler_cpp", (DL_FUNC) &_ilike_do_importance_sampler_cpp, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_ilike(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
