/*
 * ezdoctemplatedocument_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezdoctemplatedocument/getList
 */

#ifndef _ezdoctemplatedocument_get_list_v1_response_m_payload_H_
#define _ezdoctemplatedocument_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_get_list_v1_response_m_payload_t ezdoctemplatedocument_get_list_v1_response_m_payload_t;

#include "ezdoctemplatedocument_list_element.h"



typedef struct ezdoctemplatedocument_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_ezdoctemplatedocument; //nonprimitive container

} ezdoctemplatedocument_get_list_v1_response_m_payload_t;

ezdoctemplatedocument_get_list_v1_response_m_payload_t *ezdoctemplatedocument_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezdoctemplatedocument
);

void ezdoctemplatedocument_get_list_v1_response_m_payload_free(ezdoctemplatedocument_get_list_v1_response_m_payload_t *ezdoctemplatedocument_get_list_v1_response_m_payload);

ezdoctemplatedocument_get_list_v1_response_m_payload_t *ezdoctemplatedocument_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezdoctemplatedocument_get_list_v1_response_m_payloadJSON);

cJSON *ezdoctemplatedocument_get_list_v1_response_m_payload_convertToJSON(ezdoctemplatedocument_get_list_v1_response_m_payload_t *ezdoctemplatedocument_get_list_v1_response_m_payload);

#endif /* _ezdoctemplatedocument_get_list_v1_response_m_payload_H_ */

