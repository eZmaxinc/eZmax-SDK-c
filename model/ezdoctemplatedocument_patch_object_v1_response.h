/*
 * ezdoctemplatedocument_patch_object_v1_response.h
 *
 * Response for PATCH /1/object/ezdoctemplatedocument/{pkiEzdoctemplatedocumentID}
 */

#ifndef _ezdoctemplatedocument_patch_object_v1_response_H_
#define _ezdoctemplatedocument_patch_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_patch_object_v1_response_t ezdoctemplatedocument_patch_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezdoctemplatedocument_patch_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezdoctemplatedocument_patch_object_v1_response_t;

ezdoctemplatedocument_patch_object_v1_response_t *ezdoctemplatedocument_patch_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezdoctemplatedocument_patch_object_v1_response_free(ezdoctemplatedocument_patch_object_v1_response_t *ezdoctemplatedocument_patch_object_v1_response);

ezdoctemplatedocument_patch_object_v1_response_t *ezdoctemplatedocument_patch_object_v1_response_parseFromJSON(cJSON *ezdoctemplatedocument_patch_object_v1_responseJSON);

cJSON *ezdoctemplatedocument_patch_object_v1_response_convertToJSON(ezdoctemplatedocument_patch_object_v1_response_t *ezdoctemplatedocument_patch_object_v1_response);

#endif /* _ezdoctemplatedocument_patch_object_v1_response_H_ */

