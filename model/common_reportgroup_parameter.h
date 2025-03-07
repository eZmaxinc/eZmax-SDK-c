/*
 * common_reportgroup_parameter.h
 *
 * A parameter of Reportgroup 
 */

#ifndef _common_reportgroup_parameter_H_
#define _common_reportgroup_parameter_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_reportgroup_parameter_t common_reportgroup_parameter_t;




typedef struct common_reportgroup_parameter_t {
    char *s_reportgroup_parameter_name; // string
    char *s_reportgroup_parameter_value; // string
    list_t *a_s_reportgroup_parameter_value; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} common_reportgroup_parameter_t;

__attribute__((deprecated)) common_reportgroup_parameter_t *common_reportgroup_parameter_create(
    char *s_reportgroup_parameter_name,
    char *s_reportgroup_parameter_value,
    list_t *a_s_reportgroup_parameter_value
);

void common_reportgroup_parameter_free(common_reportgroup_parameter_t *common_reportgroup_parameter);

common_reportgroup_parameter_t *common_reportgroup_parameter_parseFromJSON(cJSON *common_reportgroup_parameterJSON);

cJSON *common_reportgroup_parameter_convertToJSON(common_reportgroup_parameter_t *common_reportgroup_parameter);

#endif /* _common_reportgroup_parameter_H_ */

