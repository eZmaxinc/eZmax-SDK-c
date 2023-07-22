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

#include "common_reportcolumn.h"
#include "common_reportsubsection.h"
#include "enum_horizontalalignment.h"

// Enum  for common_reportsection

typedef enum  { ezmax_api_definition__full_common_reportsection__NULL = 0, ezmax_api_definition__full_common_reportsection__Center, ezmax_api_definition__full_common_reportsection__Left, ezmax_api_definition__full_common_reportsection__Right } ezmax_api_definition__full_common_reportsection__e;

char* common_reportsection_e_reportsection_horizontalalignment_ToString(ezmax_api_definition__full_common_reportsection__e e_reportsection_horizontalalignment);

ezmax_api_definition__full_common_reportsection__e common_reportsection_e_reportsection_horizontalalignment_FromString(char* e_reportsection_horizontalalignment);



typedef struct common_reportsection_t {
    list_t *a_obj_reportsubsection; //nonprimitive container
    list_t *a_obj_reportcolumn; //nonprimitive container
    enum_horizontalalignment_t *e_reportsection_horizontalalignment; // custom
    int i_reportsection_columncount; //numeric
    int i_reportsection_width; //numeric

} common_reportsection_t;

common_reportsection_t *common_reportsection_create(
    list_t *a_obj_reportsubsection,
    list_t *a_obj_reportcolumn,
    enum_horizontalalignment_t *e_reportsection_horizontalalignment,
    int i_reportsection_columncount,
    int i_reportsection_width
);

void common_reportsection_free(common_reportsection_t *common_reportsection);

common_reportsection_t *common_reportsection_parseFromJSON(cJSON *common_reportsectionJSON);

cJSON *common_reportsection_convertToJSON(common_reportsection_t *common_reportsection);

#endif /* _common_reportsection_H_ */

