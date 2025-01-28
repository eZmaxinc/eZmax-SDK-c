/*
 * ezdoctemplatetype_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/ezdoctemplatetype/getAutocomplete
 */

#ifndef _ezdoctemplatetype_get_autocomplete_v2_response_m_payload_H_
#define _ezdoctemplatetype_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t;

#include "ezdoctemplatetype_autocomplete_element_response.h"



typedef struct ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_ezdoctemplatetype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t *ezdoctemplatetype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezdoctemplatetype
);

void ezdoctemplatetype_get_autocomplete_v2_response_m_payload_free(ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t *ezdoctemplatetype_get_autocomplete_v2_response_m_payload);

ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t *ezdoctemplatetype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezdoctemplatetype_get_autocomplete_v2_response_m_payloadJSON);

cJSON *ezdoctemplatetype_get_autocomplete_v2_response_m_payload_convertToJSON(ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t *ezdoctemplatetype_get_autocomplete_v2_response_m_payload);

#endif /* _ezdoctemplatetype_get_autocomplete_v2_response_m_payload_H_ */

