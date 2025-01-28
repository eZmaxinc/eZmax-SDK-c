/*
 * field_e_ezsigntemplatepackagesigner_mapping.h
 *
 * Mapping configuration to use when package is apply.  1. **Manual** User need to choose mapping manually. 2. **Creator** mapping will be set to creator of folderS. 3. **User** mapping will be set to fkiUserID 4. **Usergroup** mapping will be set to fkiUsergroupID.
 */

#ifndef _field_e_ezsigntemplatepackagesigner_mapping_H_
#define _field_e_ezsigntemplatepackagesigner_mapping_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsigntemplatepackagesigner_mapping_t field_e_ezsigntemplatepackagesigner_mapping_t;


// Enum  for field_e_ezsigntemplatepackagesigner_mapping

typedef enum { ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__NULL = 0, ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__Manual, ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__Creator, ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__User, ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__Usergroup } ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e;

char* field_e_ezsigntemplatepackagesigner_mapping_field_e_ezsigntemplatepackagesigner_mapping_ToString(ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e field_e_ezsigntemplatepackagesigner_mapping);

ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e field_e_ezsigntemplatepackagesigner_mapping_field_e_ezsigntemplatepackagesigner_mapping_FromString(char* field_e_ezsigntemplatepackagesigner_mapping);

cJSON *field_e_ezsigntemplatepackagesigner_mapping_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e field_e_ezsigntemplatepackagesigner_mapping);

ezmax_api_definition__full_field_e_ezsigntemplatepackagesigner_mapping__e field_e_ezsigntemplatepackagesigner_mapping_parseFromJSON(cJSON *field_e_ezsigntemplatepackagesigner_mappingJSON);

#endif /* _field_e_ezsigntemplatepackagesigner_mapping_H_ */

