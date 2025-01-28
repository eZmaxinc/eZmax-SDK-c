/*
 * common_reportgroup.h
 *
 * A group of reports  Each Reportgroup is for a specific recipient or for a specific context.
 */

#ifndef _common_reportgroup_H_
#define _common_reportgroup_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_reportgroup_t common_reportgroup_t;

#include "common_report.h"
#include "common_reportcellstyle.h"



typedef struct common_reportgroup_t {
    list_t *a_obj_report; //nonprimitive container
    list_t *a_obj_reportcellstyle_custom; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} common_reportgroup_t;

__attribute__((deprecated)) common_reportgroup_t *common_reportgroup_create(
    list_t *a_obj_report,
    list_t *a_obj_reportcellstyle_custom
);

void common_reportgroup_free(common_reportgroup_t *common_reportgroup);

common_reportgroup_t *common_reportgroup_parseFromJSON(cJSON *common_reportgroupJSON);

cJSON *common_reportgroup_convertToJSON(common_reportgroup_t *common_reportgroup);

#endif /* _common_reportgroup_H_ */

