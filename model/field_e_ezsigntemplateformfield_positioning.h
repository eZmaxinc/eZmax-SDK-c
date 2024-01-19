/*
 * field_e_ezsigntemplateformfield_positioning.h
 *
 * How the positioning of the Ezsigntemplateformfield will be done
 */

#ifndef _field_e_ezsigntemplateformfield_positioning_H_
#define _field_e_ezsigntemplateformfield_positioning_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsigntemplateformfield_positioning_t field_e_ezsigntemplateformfield_positioning_t;


// Enum  for field_e_ezsigntemplateformfield_positioning

typedef enum { ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__NULL = 0, ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__PerCoordinates, ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__PerPositioningPattern } ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__e;

char* field_e_ezsigntemplateformfield_positioning_field_e_ezsigntemplateformfield_positioning_ToString(ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__e field_e_ezsigntemplateformfield_positioning);

ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__e field_e_ezsigntemplateformfield_positioning_field_e_ezsigntemplateformfield_positioning_FromString(char* field_e_ezsigntemplateformfield_positioning);

//cJSON *field_e_ezsigntemplateformfield_positioning_field_e_ezsigntemplateformfield_positioning_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__e field_e_ezsigntemplateformfield_positioning);

//ezmax_api_definition__full_field_e_ezsigntemplateformfield_positioning__e field_e_ezsigntemplateformfield_positioning_field_e_ezsigntemplateformfield_positioning_parseFromJSON(cJSON *field_e_ezsigntemplateformfield_positioningJSON);

#endif /* _field_e_ezsigntemplateformfield_positioning_H_ */

