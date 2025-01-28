/*
 * ezdoctemplatedocument_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezdoctemplatedocument
 */

#ifndef _ezdoctemplatedocument_create_object_v1_response_m_payload_H_
#define _ezdoctemplatedocument_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_create_object_v1_response_m_payload_t ezdoctemplatedocument_create_object_v1_response_m_payload_t;




typedef struct ezdoctemplatedocument_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezdoctemplatedocument_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezdoctemplatedocument_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezdoctemplatedocument_create_object_v1_response_m_payload_t *ezdoctemplatedocument_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezdoctemplatedocument_id
);

void ezdoctemplatedocument_create_object_v1_response_m_payload_free(ezdoctemplatedocument_create_object_v1_response_m_payload_t *ezdoctemplatedocument_create_object_v1_response_m_payload);

ezdoctemplatedocument_create_object_v1_response_m_payload_t *ezdoctemplatedocument_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezdoctemplatedocument_create_object_v1_response_m_payloadJSON);

cJSON *ezdoctemplatedocument_create_object_v1_response_m_payload_convertToJSON(ezdoctemplatedocument_create_object_v1_response_m_payload_t *ezdoctemplatedocument_create_object_v1_response_m_payload);

#endif /* _ezdoctemplatedocument_create_object_v1_response_m_payload_H_ */

