/*
 * ezdoctemplatedocument_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/ezdoctemplatedocument/getAutocomplete
 */

#ifndef _ezdoctemplatedocument_get_autocomplete_v2_response_H_
#define _ezdoctemplatedocument_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_get_autocomplete_v2_response_t ezdoctemplatedocument_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezdoctemplatedocument_get_autocomplete_v2_response_m_payload.h"



typedef struct ezdoctemplatedocument_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezdoctemplatedocument_get_autocomplete_v2_response_t;

__attribute__((deprecated)) ezdoctemplatedocument_get_autocomplete_v2_response_t *ezdoctemplatedocument_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezdoctemplatedocument_get_autocomplete_v2_response_m_payload_t *m_payload
);

void ezdoctemplatedocument_get_autocomplete_v2_response_free(ezdoctemplatedocument_get_autocomplete_v2_response_t *ezdoctemplatedocument_get_autocomplete_v2_response);

ezdoctemplatedocument_get_autocomplete_v2_response_t *ezdoctemplatedocument_get_autocomplete_v2_response_parseFromJSON(cJSON *ezdoctemplatedocument_get_autocomplete_v2_responseJSON);

cJSON *ezdoctemplatedocument_get_autocomplete_v2_response_convertToJSON(ezdoctemplatedocument_get_autocomplete_v2_response_t *ezdoctemplatedocument_get_autocomplete_v2_response);

#endif /* _ezdoctemplatedocument_get_autocomplete_v2_response_H_ */

