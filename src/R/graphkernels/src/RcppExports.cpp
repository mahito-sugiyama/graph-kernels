// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

// #include <RcppEigen.h>
// #include <Rcpp.h>

// using namespace Rcpp;

#include <RcppEigen.h>
#define Int int32_t

// [[Rcpp::plugins(cpp11)]]
// [[Rcpp::depends(RcppEigen)]]

using Eigen::Map;
using Eigen::SparseMatrix;
using Eigen::LLT;

typedef Eigen::Triplet<double> T;

using namespace Rcpp;
using namespace Eigen;
using namespace std;


// CalculateKernelCpp
NumericMatrix CalculateKernelCpp(List graph_info_list, NumericVector par_r, Int kernel_type);
RcppExport SEXP graphkernels_CalculateKernelCpp(SEXP graph_info_listSEXP, SEXP par_rSEXP, SEXP kernel_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type graph_info_list(graph_info_listSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type par_r(par_rSEXP);
    Rcpp::traits::input_parameter< Int >::type kernel_type(kernel_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(CalculateKernelCpp(graph_info_list, par_r, kernel_type));
    return rcpp_result_gen;
END_RCPP
}
// CalculateGraphletKernelCpp
NumericMatrix CalculateGraphletKernelCpp(vector<SparseMatrix<Int>>& graph_adj_all, vector<vector<vector<Int>>>& graph_adjlist_all, Int k, bool connected);
RcppExport SEXP graphkernels_CalculateGraphletKernelCpp(SEXP graph_adj_allSEXP, SEXP graph_adjlist_allSEXP, SEXP kSEXP, SEXP connectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< vector<SparseMatrix<Int>>& >::type graph_adj_all(graph_adj_allSEXP);
    Rcpp::traits::input_parameter< vector<vector<vector<Int>>>& >::type graph_adjlist_all(graph_adjlist_allSEXP);
    Rcpp::traits::input_parameter< Int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type connected(connectedSEXP);
    rcpp_result_gen = Rcpp::wrap(CalculateGraphletKernelCpp(graph_adj_all, graph_adjlist_all, k, connected));
    return rcpp_result_gen;
END_RCPP
}
