/*
 * ezdoctemplatedocument_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezdoctemplatedocument/{pkiEzdoctemplatedocumentID}
 */

#ifndef _ezdoctemplatedocument_get_object_v2_response_m_payload_H_
#define _ezdoctemplatedocument_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_get_object_v2_response_m_payload_t ezdoctemplatedocument_get_object_v2_response_m_payload_t;

#include "ezdoctemplatedocument_response_compound.h"



typedef struct ezdoctemplatedocument_get_object_v2_response_m_payload_t {
    struct ezdoctemplatedocument_response_compound_t *obj_ezdoctemplatedocument; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezdoctemplatedocument_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezdoctemplatedocument_get_object_v2_response_m_payload_t *ezdoctemplatedocument_get_object_v2_response_m_payload_create(
    ezdoctemplatedocument_response_compound_t *obj_ezdoctemplatedocument
);

void ezdoctemplatedocument_get_object_v2_response_m_payload_free(ezdoctemplatedocument_get_object_v2_response_m_payload_t *ezdoctemplatedocument_get_object_v2_response_m_payload);

ezdoctemplatedocument_get_object_v2_response_m_payload_t *ezdoctemplatedocument_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezdoctemplatedocument_get_object_v2_response_m_payloadJSON);

cJSON *ezdoctemplatedocument_get_object_v2_response_m_payload_convertToJSON(ezdoctemplatedocument_get_object_v2_response_m_payload_t *ezdoctemplatedocument_get_object_v2_response_m_payload);

#endif /* _ezdoctemplatedocument_get_object_v2_response_m_payload_H_ */

