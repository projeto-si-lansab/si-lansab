#!/bin/bash

APP_ID=$1
DF_PATH=$2

sed -i -e 's/\(<[^"]*"ApplicationId">\)\([^<]*\)\(<[^>]*\)/\1'"$APP_ID"'\3/g' $DF_PATH
