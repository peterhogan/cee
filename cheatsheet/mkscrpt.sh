#!/bin/bash

FILE=$1
RUN="${FILE%.*}"

make $RUN
./$RUN $2 $3
rm $RUN
