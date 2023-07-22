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



typedef struct common_reportcolumn_t {
    struct common_reportcellstyle_t *obj_reportcellstyle_default; //model
    int i_reportcolumn_width; //numeric

} common_reportcolumn_t;

common_reportcolumn_t *common_reportcolumn_create(
    common_reportcellstyle_t *obj_reportcellstyle_default,
    int i_reportcolumn_width
);

void common_reportcolumn_free(common_reportcolumn_t *common_reportcolumn);

common_reportcolumn_t *common_reportcolumn_parseFromJSON(cJSON *common_reportcolumnJSON);

cJSON *common_reportcolumn_convertToJSON(common_reportcolumn_t *common_reportcolumn);

#endif /* _common_reportcolumn_H_ */

