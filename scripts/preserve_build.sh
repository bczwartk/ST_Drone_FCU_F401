#!/bin/bash -x

BUILD_ID=$1
curl --user admin:admin -k -X 'PUT' "https://hound2.parasoft.com.pl:8443/grs/api/v1.12/builds/${BUILD_ID}/persistence" -H 'accept: application/json' -H 'Content-Type: application/json' -d '{ "archived": true, "locked": true }'

