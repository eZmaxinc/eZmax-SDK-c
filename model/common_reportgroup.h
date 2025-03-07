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
#include "common_reportgroup_parameter.h"



typedef struct common_reportgroup_t {
    list_t *a_obj_report; //nonprimitive container
    list_t *a_obj_reportcellstyle_custom; //nonprimitive container
    list_t *a_obj_reportgroup_parameter; //nonprimitive container
    char *s_reportgroup_filename; // string

    int _library_owned; // Is the library responsible for freeing this object?
} common_reportgroup_t;

__attribute__((deprecated)) common_reportgroup_t *common_reportgroup_create(
    list_t *a_obj_report,
    list_t *a_obj_reportcellstyle_custom,
    list_t *a_obj_reportgroup_parameter,
    char *s_reportgroup_filename
);

void common_reportgroup_free(common_reportgroup_t *common_reportgroup);

common_reportgroup_t *common_reportgroup_parseFromJSON(cJSON *common_reportgroupJSON);

cJSON *common_reportgroup_convertToJSON(common_reportgroup_t *common_reportgroup);

#endif /* _common_reportgroup_H_ */

