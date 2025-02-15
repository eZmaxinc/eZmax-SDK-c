/*
 * ezdoctemplatedocument_create_object_v1_response.h
 *
 * Response for POST /1/object/ezdoctemplatedocument
 */

#ifndef _ezdoctemplatedocument_create_object_v1_response_H_
#define _ezdoctemplatedocument_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_create_object_v1_response_t ezdoctemplatedocument_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezdoctemplatedocument_create_object_v1_response_m_payload.h"



typedef struct ezdoctemplatedocument_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezdoctemplatedocument_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezdoctemplatedocument_create_object_v1_response_t;

__attribute__((deprecated)) ezdoctemplatedocument_create_object_v1_response_t *ezdoctemplatedocument_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezdoctemplatedocument_create_object_v1_response_m_payload_t *m_payload
);

void ezdoctemplatedocument_create_object_v1_response_free(ezdoctemplatedocument_create_object_v1_response_t *ezdoctemplatedocument_create_object_v1_response);

ezdoctemplatedocument_create_object_v1_response_t *ezdoctemplatedocument_create_object_v1_response_parseFromJSON(cJSON *ezdoctemplatedocument_create_object_v1_responseJSON);

cJSON *ezdoctemplatedocument_create_object_v1_response_convertToJSON(ezdoctemplatedocument_create_object_v1_response_t *ezdoctemplatedocument_create_object_v1_response);

#endif /* _ezdoctemplatedocument_create_object_v1_response_H_ */

