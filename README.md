
<!-- README.md is generated from README.Rmd. Please edit that file -->

# landscapemetrics <img src="man/figures/logo.png" align="right" width="150" />

[![Travis build
status](https://travis-ci.org/marcosci/landscapemetrics.svg?branch=master)](https://travis-ci.org/marcosci/landscapemetrics)
[![AppVeyor build
status](https://ci.appveyor.com/api/projects/status/github/marcosci/landscapemetrics?branch=master&svg=true)](https://ci.appveyor.com/project/marcosci/landscapemetrics)
[![Coverage
status](https://codecov.io/gh/marcosci/landscapemetrics/branch/master/graph/badge.svg)](https://codecov.io/github/marcosci/landscapemetrics?branch=master)
[![lifecycle](https://img.shields.io/badge/lifecycle-experimental-orange.svg)](https://www.tidyverse.org/lifecycle/#experimental)
[![Project Status: Active – The project has reached a stable, usable
state and is being actively
developed.](http://www.repostatus.org/badges/latest/active.svg)](http://www.repostatus.org/#active)

## Overview

**landscapemetrics** is an R package for calculating landscape metrics
for categorical landscape patterns in a tidy workflow. This package
supports `raster` spatial objects and takes `RasterLayer`,
`RasterStacks`, `RasterBricks` or lists of `RasterLayer` as input
arguments. Every function can be used in a piped workflow, as it always
takes the data as the first argument and returns a tibble of the same
dimension.

There are already software packages available to calculate landscape
metrics, the most famous one probably being the stand-alone software
FRAGSTATS (McGarigal *et al.* 2012). But also add-ons to GIS software
are available, e.g. r.le (Baker & Cai 1992) or its successor r.li for
GRASS GIS. Lastly, also an R package, namely SDMTools (VanDerWal *et
al.* 2014), can be used.

Nevertheless, we decided to reimplement most of the metrics available in
[FRAGSTATS](https://www.umass.edu/landeco/research/fragstats/documents/fragstats_documents.html).
We wanted to provide a comprehensive collection of landscape metrics in
R. While FRAGSTATS is an extensive collection it is only available for
Windows. Note, that even though we tried to reimplement the metrics as
described in the FRAGSTATS manual, there are some differences
([Differences
FRAGSTATS|landscapemetrics](https://marcosci.github.io/landscapemetrics/articles/articles/comparing_fragstats_landscapemetrics.html)).
Further, SDMTools contains only a subset of metrics and does not cover
all levels ([General
background](https://marcosci.github.io/landscapemetrics/articles/articles/general-background.html)).
Lastly, we want to start a collection of landscape metrics being open
source and easily extendable by new (future) landscape metrics (see
[CONTRIBUTING](CONTRIBUTING.md)).

Those were the main reasons we implemented **landscapemetrics**,
however, we want to fully appreciate and acknowledge the already present
software.

## Installation

You can install **landscapemetrics** from GitHub with:

```
# install.packages("devtools")
devtools::install_github("marcosci/landscapemetrics")
```

## Using landscapemetrics

The functions in **landscapemetrics** start with `lsm_`. The next part of the function names are a combination level (patch - `p`, class - `c` or landscape - `l`) and the metric abbreviation metric (e.g. `enn` for the euclidean nearest-neighbor distance):    

```
# general structure
lsm_"level"_"metric"

# Patch level
## lsm_p_"metric"
lsm_p_enn()

# Class level
## lsm_c_"metric"
lsm_c_enn()

# Landscape level
## lsm_p_"metric"
lsm_l_enn()
```

All functions return a identical structured tibble:

<p style="text-align:center;">

| layer | level     | class | id | metric           | value |
| ----- | --------- | ----- | -- | ---------------- | ----- |
| 1     | patch     | 1     | 1  | landscape metric | x     |
| 1     | class     | 1     | NA | landscape metric | x     |
| 1     | landscape | NA    | NA | landscape metric | x     |

</p>

### Using metric functions

Every function follows the same implementation design, so the usage is
quite straight forward:

```{r}
library(landscapemetrics)
library(raster)
library(tidyverse)

# Landscape raster
landscape
#> class       : RasterLayer 
#> dimensions  : 30, 30, 900  (nrow, ncol, ncell)
#> resolution  : 1, 1  (x, y)
#> extent      : 0, 30, 0, 30  (xmin, xmax, ymin, ymax)
#> coord. ref. : NA 
#> data source : in memory
#> names       : clumps 
#> values      : 1, 3  (min, max)

# Calculate for example the euclidean nearest-neighbor distance on patch level
landscape %>% 
  lsm_p_enn()


#> # A tibble: 27 x 6
#>    layer level class    id metric value
#>    <int> <chr> <int> <int> <chr>  <dbl>
#>  1     1 patch     1     1 enn     7   
#>  2     1 patch     1     2 enn     4   
#>  3     1 patch     1     3 enn     2.83
#>  4     1 patch     1     4 enn     2   
#>  5     1 patch     1     5 enn     2   
#>  6     1 patch     1     6 enn     2.83
#>  7     1 patch     1     7 enn     4.12
#>  8     1 patch     1     8 enn     4.12
#>  9     1 patch     1     9 enn     4.24
#> 10     1 patch     2    10 enn     4.47
#> # ... with 17 more rows
```

## Contributing

One of the major motivations behind **landscapemetrics** is the idea to
provide an open-source code collection of landscape metrics. This
includes, besides bug reports, especially the idea to include new
metrics. Therefore, in case you want to suggest new metrics and in the
best case even contribute code, we warmly welcome to do so\! For more
information see [CONTRIBUTING](CONTRIBUTING.md).

Maintainers and contributors must follow this repository’s [CODE OF
CONDUCT](CODE_OF_CONDUCT.md).

### References

Baker, W.L. and Cai, Y. 1992. The r.le programs for multiscale analysis
of landscape structure using the GRASS geographical information system.
Landscape Ecology 7(4):291-302.

McGarigal, K., Cushman, S.A., and Ene E. 2012. FRAGSTATS v4: Spatial
Pattern Analysis Program for Categorical and Continuous Maps. Computer
software program produced by the authors at the University of
Massachusetts, Amherst. Available at the following website:
<http://www.umass.edu/landeco/research/fragstats/fragstats.html>

VanDerWal, J., Falconi, L., Januchowski, S., Shoo, L., and Storlie, C.
2014. SDMTools: Species Distribution Modelling Tools: Tools for
processing data associated with species distribution modelling
exercises. R package version 1.1-221.
<https://CRAN.R-project.org/package=SDMTools>
