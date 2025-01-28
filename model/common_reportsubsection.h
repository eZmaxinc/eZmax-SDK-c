/*
 * common_reportsubsection.h
 *
 * A Subsection in a Reportsection. It contains 3 Reportsubsectionparts (Header, Body and Footer) 
 */

#ifndef _common_reportsubsection_H_
#define _common_reportsubsection_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_reportsubsection_t common_reportsubsection_t;

#include "common_reportsubsectionpart.h"



typedef struct common_reportsubsection_t {
    struct common_reportsubsectionpart_t *obj_reportsubsectionpart_header; //model
    struct common_reportsubsectionpart_t *obj_reportsubsectionpart_body; //model
    struct common_reportsubsectionpart_t *obj_reportsubsectionpart_footer; //model

    int _library_owned; // Is the library responsible for freeing this object?
} common_reportsubsection_t;

__attribute__((deprecated)) common_reportsubsection_t *common_reportsubsection_create(
    common_reportsubsectionpart_t *obj_reportsubsectionpart_header,
    common_reportsubsectionpart_t *obj_reportsubsectionpart_body,
    common_reportsubsectionpart_t *obj_reportsubsectionpart_footer
);

void common_reportsubsection_free(common_reportsubsection_t *common_reportsubsection);

common_reportsubsection_t *common_reportsubsection_parseFromJSON(cJSON *common_reportsubsectionJSON);

cJSON *common_reportsubsection_convertToJSON(common_reportsubsection_t *common_reportsubsection);

#endif /* _common_reportsubsection_H_ */

