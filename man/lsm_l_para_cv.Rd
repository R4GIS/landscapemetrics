% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/lsm_l_para_cv.R
\name{lsm_l_para_cv}
\alias{lsm_l_para_cv}
\alias{lsm_l_para_cv.RasterLayer}
\alias{lsm_l_para_cv.RasterStack}
\alias{lsm_l_para_cv.RasterBrick}
\alias{lsm_l_para_cv.stars}
\alias{lsm_l_para_cv.list}
\title{PARA_CV (landscape level)}
\usage{
lsm_l_para_cv(landscape, directions)

\method{lsm_l_para_cv}{RasterLayer}(landscape, directions = 8)

\method{lsm_l_para_cv}{RasterStack}(landscape, directions = 8)

\method{lsm_l_para_cv}{RasterBrick}(landscape, directions = 8)

\method{lsm_l_para_cv}{stars}(landscape, directions = 8)

\method{lsm_l_para_cv}{list}(landscape, directions = 8)
}
\arguments{
\item{landscape}{Raster* Layer, Stack, Brick or a list of rasterLayers.}

\item{directions}{The number of directions in which patches should be
connected: 4 (rook's case) or 8 (queen's case).}
}
\value{
tibble
}
\description{
Coefficient of variation perimeter-area ratio (Shape metric)
}
\details{
\deqn{PARA_{CV} = cv(PARA[patch_{ij}]}
where \eqn{PARA[patch_{ij}]} is the perimeter area ratio of each patch.

PARA_CV is a 'Shape metric'. It summarises the landscape as the Coefficient of variation of
each patch belonging in the landscape The perimeter-area ratio describes the patch complexity
in a straightforward way. However, because it is not standarised to a certain shape
(e.g. a square), it is not scale independent, meaning that increasing the patch size
while not changing the patch form will change the ratio.

\subsection{Units}{None}
\subsection{Range}{PARA_CV >= 0}
\subsection{Behaviour}{Equals PARA_CV = 0 if the perimeter-area ratio is identical for
all patches. Increases, without limit, as the variation of the perimeter-area ratio
increases.}
}
\examples{
lsm_l_para_cv(landscape)

}
\references{
McGarigal, K., SA Cushman, and E Ene. 2012. FRAGSTATS v4: Spatial Pattern Analysis
Program for Categorical and Continuous Maps. Computer software program produced by
the authors at the University of Massachusetts, Amherst. Available at the following
web site: http://www.umass.edu/landeco/research/fragstats/fragstats.html
}
\seealso{
\code{\link{lsm_p_para}},
\code{\link{cv}}, \cr
\code{\link{lsm_c_para_mn}},
\code{\link{lsm_c_para_sd}},
\code{\link{lsm_c_para_cv}}, \cr
\code{\link{lsm_l_para_mn}},
\code{\link{lsm_l_para_sd}}
}
