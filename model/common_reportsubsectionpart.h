/*
 * common_reportsubsectionpart.h
 *
 * A part in the Reportsubsection 
 */

#ifndef _common_reportsubsectionpart_H_
#define _common_reportsubsectionpart_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_reportsubsectionpart_t common_reportsubsectionpart_t;

#include "common_reportrow.h"

// Enum EREPORTSUBSECTIONPARTTYPE for common_reportsubsectionpart

typedef enum  { ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_NULL = 0, ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_Header, ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_Body, ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_Footer } ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_e;

char* common_reportsubsectionpart_e_reportsubsectionpart_type_ToString(ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_e e_reportsubsectionpart_type);

ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_e common_reportsubsectionpart_e_reportsubsectionpart_type_FromString(char* e_reportsubsectionpart_type);



typedef struct common_reportsubsectionpart_t {
    ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_e e_reportsubsectionpart_type; //enum
    list_t *a_obj_reportrow; //nonprimitive container

} common_reportsubsectionpart_t;

common_reportsubsectionpart_t *common_reportsubsectionpart_create(
    ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_e e_reportsubsectionpart_type,
    list_t *a_obj_reportrow
);

void common_reportsubsectionpart_free(common_reportsubsectionpart_t *common_reportsubsectionpart);

common_reportsubsectionpart_t *common_reportsubsectionpart_parseFromJSON(cJSON *common_reportsubsectionpartJSON);

cJSON *common_reportsubsectionpart_convertToJSON(common_reportsubsectionpart_t *common_reportsubsectionpart);

#endif /* _common_reportsubsectionpart_H_ */

