/*
 * field_e_ezsigntemplatesignature_attachmentnamesource.h
 *
 * The source of the name of the attachment added to the Ezsigntemplatesignature
 */

#ifndef _field_e_ezsigntemplatesignature_attachmentnamesource_H_
#define _field_e_ezsigntemplatesignature_attachmentnamesource_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsigntemplatesignature_attachmentnamesource_t field_e_ezsigntemplatesignature_attachmentnamesource_t;


// Enum  for field_e_ezsigntemplatesignature_attachmentnamesource

typedef enum { ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__NULL = 0, ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__Description, ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__Customer, ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__DescriptionCustomer } ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e;

char* field_e_ezsigntemplatesignature_attachmentnamesource_field_e_ezsigntemplatesignature_attachmentnamesource_ToString(ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e field_e_ezsigntemplatesignature_attachmentnamesource);

ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e field_e_ezsigntemplatesignature_attachmentnamesource_field_e_ezsigntemplatesignature_attachmentnamesource_FromString(char* field_e_ezsigntemplatesignature_attachmentnamesource);

cJSON *field_e_ezsigntemplatesignature_attachmentnamesource_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e field_e_ezsigntemplatesignature_attachmentnamesource);

ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e field_e_ezsigntemplatesignature_attachmentnamesource_parseFromJSON(cJSON *field_e_ezsigntemplatesignature_attachmentnamesourceJSON);

#endif /* _field_e_ezsigntemplatesignature_attachmentnamesource_H_ */

