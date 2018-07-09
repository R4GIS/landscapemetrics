// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// ccl_borders
arma::mat ccl_borders(const arma::mat& m);
RcppExport SEXP _landscapemetrics_ccl_borders(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(ccl_borders(m));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_xy_from_matrix
IntegerMatrix rcpp_xy_from_matrix(arma::imat x);
RcppExport SEXP _landscapemetrics_rcpp_xy_from_matrix(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_xy_from_matrix(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_cell_from_xy
IntegerVector rcpp_cell_from_xy(arma::imat x, IntegerMatrix y);
RcppExport SEXP _landscapemetrics_rcpp_cell_from_xy(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_cell_from_xy(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_adjacency
IntegerMatrix rcpp_get_adjacency(arma::imat x, int directions);
RcppExport SEXP _landscapemetrics_rcpp_get_adjacency(SEXP xSEXP, SEXP directionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type directions(directionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_adjacency(x, directions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_pairs
IntegerMatrix rcpp_get_pairs(arma::imat x, int directions);
RcppExport SEXP _landscapemetrics_rcpp_get_pairs(SEXP xSEXP, SEXP directionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type directions(directionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_pairs(x, directions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_composition_vector
NumericVector rcpp_get_composition_vector(arma::imat x);
RcppExport SEXP _landscapemetrics_rcpp_get_composition_vector(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_composition_vector(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_coocurrence_matrix
IntegerMatrix rcpp_get_coocurrence_matrix(arma::imat x, int directions);
RcppExport SEXP _landscapemetrics_rcpp_get_coocurrence_matrix(SEXP xSEXP, SEXP directionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type directions(directionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_coocurrence_matrix(x, directions));
    return rcpp_result_gen;
END_RCPP
}
// triangular_index
int triangular_index(int r, int c);
RcppExport SEXP _landscapemetrics_triangular_index(SEXP rSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(triangular_index(r, c));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_coocurrence_vector
NumericVector rcpp_get_coocurrence_vector(arma::imat x, int directions, bool ordered);
RcppExport SEXP _landscapemetrics_rcpp_get_coocurrence_vector(SEXP xSEXP, SEXP directionsSEXP, SEXP orderedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type directions(directionsSEXP);
    Rcpp::traits::input_parameter< bool >::type ordered(orderedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_coocurrence_vector(x, directions, ordered));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_offdiagonal_vector
NumericVector rcpp_get_offdiagonal_vector(arma::imat x, int directions);
RcppExport SEXP _landscapemetrics_rcpp_get_offdiagonal_vector(SEXP xSEXP, SEXP directionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type directions(directionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_offdiagonal_vector(x, directions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_entropy
double rcpp_get_entropy(NumericVector x, std::string base);
RcppExport SEXP _landscapemetrics_rcpp_get_entropy(SEXP xSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type base(baseSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_entropy(x, base));
    return rcpp_result_gen;
END_RCPP
}
// ccl_labels
Rcpp::List ccl_labels(const arma::mat& m);
RcppExport SEXP _landscapemetrics_ccl_labels(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(ccl_labels(m));
    return rcpp_result_gen;
END_RCPP
}
// timesTwo
NumericVector timesTwo(arma::imat x);
RcppExport SEXP _landscapemetrics_timesTwo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(timesTwo(x));
    return rcpp_result_gen;
END_RCPP
}
// doXYFromCell
NumericMatrix doXYFromCell(arma::imat x);
RcppExport SEXP _landscapemetrics_doXYFromCell(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(doXYFromCell(x));
    return rcpp_result_gen;
END_RCPP
}
// doCrossTab2
IntegerVector doCrossTab2(int x, int y);
RcppExport SEXP _landscapemetrics_doCrossTab2(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(doCrossTab2(x, y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_landscapemetrics_ccl_borders", (DL_FUNC) &_landscapemetrics_ccl_borders, 1},
    {"_landscapemetrics_rcpp_xy_from_matrix", (DL_FUNC) &_landscapemetrics_rcpp_xy_from_matrix, 1},
    {"_landscapemetrics_rcpp_cell_from_xy", (DL_FUNC) &_landscapemetrics_rcpp_cell_from_xy, 2},
    {"_landscapemetrics_rcpp_get_adjacency", (DL_FUNC) &_landscapemetrics_rcpp_get_adjacency, 2},
    {"_landscapemetrics_rcpp_get_pairs", (DL_FUNC) &_landscapemetrics_rcpp_get_pairs, 2},
    {"_landscapemetrics_rcpp_get_composition_vector", (DL_FUNC) &_landscapemetrics_rcpp_get_composition_vector, 1},
    {"_landscapemetrics_rcpp_get_coocurrence_matrix", (DL_FUNC) &_landscapemetrics_rcpp_get_coocurrence_matrix, 2},
    {"_landscapemetrics_triangular_index", (DL_FUNC) &_landscapemetrics_triangular_index, 2},
    {"_landscapemetrics_rcpp_get_coocurrence_vector", (DL_FUNC) &_landscapemetrics_rcpp_get_coocurrence_vector, 3},
    {"_landscapemetrics_rcpp_get_offdiagonal_vector", (DL_FUNC) &_landscapemetrics_rcpp_get_offdiagonal_vector, 2},
    {"_landscapemetrics_rcpp_get_entropy", (DL_FUNC) &_landscapemetrics_rcpp_get_entropy, 2},
    {"_landscapemetrics_ccl_labels", (DL_FUNC) &_landscapemetrics_ccl_labels, 1},
    {"_landscapemetrics_timesTwo", (DL_FUNC) &_landscapemetrics_timesTwo, 1},
    {"_landscapemetrics_doXYFromCell", (DL_FUNC) &_landscapemetrics_doXYFromCell, 1},
    {"_landscapemetrics_doCrossTab2", (DL_FUNC) &_landscapemetrics_doCrossTab2, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_landscapemetrics(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
