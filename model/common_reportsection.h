/*
 * common_reportsection.h
 *
 * A section in a Report. Each Reportsection shares Reportcolumns disposition with all its Reportsubsection 
 */

#ifndef _common_reportsection_H_
#define _common_reportsection_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_reportsection_t common_reportsection_t;

#include "common_reportsubsection.h"
#include "enum_horizontalalignment.h"



typedef struct common_reportsection_t {
    list_t *a_obj_reportsubsection; //nonprimitive container
    ezmax_api_definition__full_enum_horizontalalignment__e e_reportsection_horizontalalignment; //referenced enum
    char *s_reportsection_title; // string

    int _library_owned; // Is the library responsible for freeing this object?
} common_reportsection_t;

__attribute__((deprecated)) common_reportsection_t *common_reportsection_create(
    list_t *a_obj_reportsubsection,
    ezmax_api_definition__full_enum_horizontalalignment__e e_reportsection_horizontalalignment,
    char *s_reportsection_title
);

void common_reportsection_free(common_reportsection_t *common_reportsection);

common_reportsection_t *common_reportsection_parseFromJSON(cJSON *common_reportsectionJSON);

cJSON *common_reportsection_convertToJSON(common_reportsection_t *common_reportsection);

#endif /* _common_reportsection_H_ */

