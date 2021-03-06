% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/lsm_l_rpr.R
\name{lsm_l_rpr}
\alias{lsm_l_rpr}
\alias{lsm_l_rpr.RasterLayer}
\alias{lsm_l_rpr.RasterStack}
\alias{lsm_l_rpr.RasterBrick}
\alias{lsm_l_rpr.stars}
\alias{lsm_l_rpr.list}
\title{RPD (landscape level)}
\usage{
lsm_l_rpr(landscape, classes_max, verbose)

\method{lsm_l_rpr}{RasterLayer}(landscape, classes_max = NULL,
  verbose = TRUE)

\method{lsm_l_rpr}{RasterStack}(landscape, classes_max = NULL,
  verbose = TRUE)

\method{lsm_l_rpr}{RasterBrick}(landscape, classes_max = NULL,
  verbose = TRUE)

\method{lsm_l_rpr}{stars}(landscape, classes_max = NULL,
  verbose = TRUE)

\method{lsm_l_rpr}{list}(landscape, classes_max = NULL, verbose = TRUE)
}
\arguments{
\item{landscape}{Raster* Layer, Stack, Brick or a list of rasterLayers.}

\item{classes_max}{Potential maximum number of present classes}

\item{verbose}{Print warning message if not sufficient patches are present}
}
\value{
tibble
}
\description{
Relative patch richness (Diversity metric)
}
\details{
\deqn{RPR = \frac{m} {m_{max}} * 100}
where \eqn{m} is the number of classes and \eqn{m_{max}} is the (theoretical)
maximum number of classes.

RPR is an 'Diversity metric'. The metric calculates the percentage of present classes
in the landscape in relation to a (theoretical) number of maximum classes. The user has to
specify the maximum number of classes. Note, that if \code{classes_max} is not provided,
the functions returns \code{NA}.

\subsection{Units}{Percentage}
\subsection{Ranges}{0 < RPR <= 100}
\subsection{Behaviour}{Approaches RPR > 0 when only one class type is present,
but the maximum number of classes is large. Equals RPR = 100 when m = m_max}
}
\examples{
lsm_l_rpr(landscape, classes_max = 5)

}
\references{
McGarigal, K., SA Cushman, and E Ene. 2012. FRAGSTATS v4: Spatial Pattern Analysis
Program for Categorical and Continuous Maps. Computer software program produced by
the authors at the University of Massachusetts, Amherst. Available at the following
web site: http://www.umass.edu/landeco/research/fragstats/fragstats.html

Romme, W. H. 1982. Fire and landscapediversity in subalpine forests of
Yellowstone National Park.Ecol.Monogr. 52:199-221
}
