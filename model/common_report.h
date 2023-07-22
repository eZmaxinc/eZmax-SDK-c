/*
 * common_report.h
 *
 * A Report containing Reportsections 
 */

#ifndef _common_report_H_
#define _common_report_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_report_t common_report_t;

#include "common_reportsection.h"



typedef struct common_report_t {
    list_t *a_obj_reportsection; //nonprimitive container

} common_report_t;

common_report_t *common_report_create(
    list_t *a_obj_reportsection
);

void common_report_free(common_report_t *common_report);

common_report_t *common_report_parseFromJSON(cJSON *common_reportJSON);

cJSON *common_report_convertToJSON(common_report_t *common_report);

#endif /* _common_report_H_ */

