#' Related Circumscribing Circle distribution (landscape level)
#'
#' @description Coeffiecient of variation of related circumscribing circle (landscape level)
#'
#' @param landscape Raster* Layer, Stack, Brick or a list of rasterLayers.
#'
#' @details
#' Equals the coeffiecent of variation of the related circumscribing circle of all patches
#' in the landscape. Equals the 1 - the patch area (m^2) divided by the area (m^2)
#' of the smallest circumscribing circle.
#' \deqn{CIRCLE_CV = cv(CIRCLE[patch])}
#' \subsection{Units}{None}
#' \subsection{Range}{???}
#' \subsection{Behaviour}{????}
#'
#' @return tibble
#'
#' @examples
#' lsm_l_circle_cv(landscape)
#'
#' @aliases lsm_l_circle_cv
#' @rdname lsm_l_circle_cv
#'
#' @references
#' McGarigal, K., and B. J. Marks. 1995. FRAGSTATS: spatial pattern analysis
#' program for quantifying landscape structure. USDA For. Serv. Gen. Tech. Rep.
#'  PNW-351.
#'
#' @export
lsm_l_circle_cv <- function(landscape) UseMethod("lsm_l_circle_cv")

#' @name lsm_l_circle_cv
#' @export
lsm_l_circle_cv.RasterLayer <- function(landscape) {
    purrr::map_dfr(raster::as.list(landscape), lsm_l_circle_cv_calc, .id = "layer") %>%
        dplyr::mutate(layer = as.integer(layer))
}

#' @name lsm_l_circle_cv
#' @export
lsm_l_circle_cv.RasterStack <- function(landscape) {
    purrr::map_dfr(raster::as.list(landscape), lsm_l_circle_cv_calc, .id = "layer") %>%
        dplyr::mutate(layer = as.integer(layer))

}

#' @name lsm_l_circle_cv
#' @export
lsm_l_circle_cv.RasterBrick <- function(landscape) {
    purrr::map_dfr(raster::as.list(landscape), lsm_l_circle_cv_calc, .id = "layer") %>%
        dplyr::mutate(layer = as.integer(layer))

}

#' @name lsm_l_circle_cv
#' @export
lsm_l_circle_cv.list <- function(landscape) {
    purrr::map_dfr(landscape, lsm_l_circle_cv_calc, .id = "layer") %>%
        dplyr::mutate(layer = as.integer(layer))

}

lsm_l_circle_cv_calc <- function(landscape) {

    circle_mn  <- lsm_p_circle_calc(landscape) %>%
        dplyr::summarize(value = raster::cv(value, na.rm = TRUE))

    tibble::tibble(
        level = "landscape",
        class = as.integer(NA),
        id = as.integer(NA),
        metric = "related circumscribing circle (mean)",
        value = circle_mn$value
    )

}
