#!/bin/bash

cut -f 5 | grep -i 'theo1\|steven1\|arnaud1\|pierre-jean' | sed -e 's/theo1/Wile E. Coyote/' -e 's/steven1/Daffy Duck/' -e 's/arnaud1/Porky Pig/' -e 's/pierre-jean/Marvin the Martian/'

