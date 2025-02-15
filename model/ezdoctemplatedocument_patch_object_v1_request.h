/*
 * ezdoctemplatedocument_patch_object_v1_request.h
 *
 * Request for PATCH /1/object/ezdoctemplatedocument/{pkiEzdoctemplatedocumentID}
 */

#ifndef _ezdoctemplatedocument_patch_object_v1_request_H_
#define _ezdoctemplatedocument_patch_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_patch_object_v1_request_t ezdoctemplatedocument_patch_object_v1_request_t;

#include "ezdoctemplatedocument_request_patch.h"



typedef struct ezdoctemplatedocument_patch_object_v1_request_t {
    struct ezdoctemplatedocument_request_patch_t *obj_ezdoctemplatedocument; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezdoctemplatedocument_patch_object_v1_request_t;

__attribute__((deprecated)) ezdoctemplatedocument_patch_object_v1_request_t *ezdoctemplatedocument_patch_object_v1_request_create(
    ezdoctemplatedocument_request_patch_t *obj_ezdoctemplatedocument
);

void ezdoctemplatedocument_patch_object_v1_request_free(ezdoctemplatedocument_patch_object_v1_request_t *ezdoctemplatedocument_patch_object_v1_request);

ezdoctemplatedocument_patch_object_v1_request_t *ezdoctemplatedocument_patch_object_v1_request_parseFromJSON(cJSON *ezdoctemplatedocument_patch_object_v1_requestJSON);

cJSON *ezdoctemplatedocument_patch_object_v1_request_convertToJSON(ezdoctemplatedocument_patch_object_v1_request_t *ezdoctemplatedocument_patch_object_v1_request);

#endif /* _ezdoctemplatedocument_patch_object_v1_request_H_ */

