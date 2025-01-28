/*
 * common_reportrow.h
 *
 * A row in a Reportsubsectionpart 
 */

#ifndef _common_reportrow_H_
#define _common_reportrow_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_reportrow_t common_reportrow_t;

#include "common_reportcell.h"



typedef struct common_reportrow_t {
    list_t *a_obj_reportcell; //nonprimitive container
    int i_reportrow_height; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} common_reportrow_t;

__attribute__((deprecated)) common_reportrow_t *common_reportrow_create(
    list_t *a_obj_reportcell,
    int i_reportrow_height
);

void common_reportrow_free(common_reportrow_t *common_reportrow);

common_reportrow_t *common_reportrow_parseFromJSON(cJSON *common_reportrowJSON);

cJSON *common_reportrow_convertToJSON(common_reportrow_t *common_reportrow);

#endif /* _common_reportrow_H_ */

