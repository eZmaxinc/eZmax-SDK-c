/*
 * ezsigntemplatepublic_get_forms_data_v1_response.h
 *
 * Response for GET /1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}/getFormsData
 */

#ifndef _ezsigntemplatepublic_get_forms_data_v1_response_H_
#define _ezsigntemplatepublic_get_forms_data_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_get_forms_data_v1_response_t ezsigntemplatepublic_get_forms_data_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepublic_get_forms_data_v1_response_m_payload.h"



typedef struct ezsigntemplatepublic_get_forms_data_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t *m_payload; //model

} ezsigntemplatepublic_get_forms_data_v1_response_t;

ezsigntemplatepublic_get_forms_data_v1_response_t *ezsigntemplatepublic_get_forms_data_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t *m_payload
);

void ezsigntemplatepublic_get_forms_data_v1_response_free(ezsigntemplatepublic_get_forms_data_v1_response_t *ezsigntemplatepublic_get_forms_data_v1_response);

ezsigntemplatepublic_get_forms_data_v1_response_t *ezsigntemplatepublic_get_forms_data_v1_response_parseFromJSON(cJSON *ezsigntemplatepublic_get_forms_data_v1_responseJSON);

cJSON *ezsigntemplatepublic_get_forms_data_v1_response_convertToJSON(ezsigntemplatepublic_get_forms_data_v1_response_t *ezsigntemplatepublic_get_forms_data_v1_response);

#endif /* _ezsigntemplatepublic_get_forms_data_v1_response_H_ */

