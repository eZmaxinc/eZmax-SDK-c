/*
 * common_reportcolumn.h
 *
 * A column in a Reportsection 
 */

#ifndef _common_reportcolumn_H_
#define _common_reportcolumn_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_reportcolumn_t common_reportcolumn_t;

#include "common_reportcellstyle.h"
#include "enum_reportdata_type.h"



typedef struct common_reportcolumn_t {
    struct common_reportcellstyle_t *obj_reportcellstyle_default; //model
    int *i_reportcolumn_width; //numeric
    ezmax_api_definition__full_enum_reportdata_type__e e_reportcolumn_type; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} common_reportcolumn_t;

__attribute__((deprecated)) common_reportcolumn_t *common_reportcolumn_create(
    common_reportcellstyle_t *obj_reportcellstyle_default,
    int *i_reportcolumn_width,
    ezmax_api_definition__full_enum_reportdata_type__e e_reportcolumn_type
);

void common_reportcolumn_free(common_reportcolumn_t *common_reportcolumn);

common_reportcolumn_t *common_reportcolumn_parseFromJSON(cJSON *common_reportcolumnJSON);

cJSON *common_reportcolumn_convertToJSON(common_reportcolumn_t *common_reportcolumn);

#endif /* _common_reportcolumn_H_ */

