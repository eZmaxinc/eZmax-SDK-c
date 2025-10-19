/*
 * field_e_inscriptiontemp_status.h
 *
 * The status of the Inscriptiontemp
 */

#ifndef _field_e_inscriptiontemp_status_H_
#define _field_e_inscriptiontemp_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_inscriptiontemp_status_t field_e_inscriptiontemp_status_t;


// Enum  for field_e_inscriptiontemp_status

typedef enum { ezmax_api_definition__full_field_e_inscriptiontemp_status__NULL = 0, ezmax_api_definition__full_field_e_inscriptiontemp_status__Imported, ezmax_api_definition__full_field_e_inscriptiontemp_status__Processed, ezmax_api_definition__full_field_e_inscriptiontemp_status__Modified } ezmax_api_definition__full_field_e_inscriptiontemp_status__e;

char* field_e_inscriptiontemp_status_field_e_inscriptiontemp_status_ToString(ezmax_api_definition__full_field_e_inscriptiontemp_status__e field_e_inscriptiontemp_status);

ezmax_api_definition__full_field_e_inscriptiontemp_status__e field_e_inscriptiontemp_status_field_e_inscriptiontemp_status_FromString(char* field_e_inscriptiontemp_status);

cJSON *field_e_inscriptiontemp_status_convertToJSON(ezmax_api_definition__full_field_e_inscriptiontemp_status__e field_e_inscriptiontemp_status);

ezmax_api_definition__full_field_e_inscriptiontemp_status__e field_e_inscriptiontemp_status_parseFromJSON(cJSON *field_e_inscriptiontemp_statusJSON);

#endif /* _field_e_inscriptiontemp_status_H_ */

