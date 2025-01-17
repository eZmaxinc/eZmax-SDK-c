/*
 * ezdoctemplatefieldtypecategory_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/ezdoctemplatefieldtypecategory/getAutocomplete
 */

#ifndef _ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_H_
#define _ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_t ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload.h"



typedef struct ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_t;

ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_t *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload_t *m_payload
);

void ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_free(ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_t *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response);

ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_t *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_parseFromJSON(cJSON *ezdoctemplatefieldtypecategory_get_autocomplete_v2_responseJSON);

cJSON *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_convertToJSON(ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_t *ezdoctemplatefieldtypecategory_get_autocomplete_v2_response);

#endif /* _ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_H_ */

