/*
 * ezdoctemplatedocument_create_object_v1_request.h
 *
 * Request for POST /1/object/ezdoctemplatedocument
 */

#ifndef _ezdoctemplatedocument_create_object_v1_request_H_
#define _ezdoctemplatedocument_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezdoctemplatedocument_create_object_v1_request_t ezdoctemplatedocument_create_object_v1_request_t;

#include "ezdoctemplatedocument_request_compound.h"



typedef struct ezdoctemplatedocument_create_object_v1_request_t {
    list_t *a_obj_ezdoctemplatedocument; //nonprimitive container

} ezdoctemplatedocument_create_object_v1_request_t;

ezdoctemplatedocument_create_object_v1_request_t *ezdoctemplatedocument_create_object_v1_request_create(
    list_t *a_obj_ezdoctemplatedocument
);

void ezdoctemplatedocument_create_object_v1_request_free(ezdoctemplatedocument_create_object_v1_request_t *ezdoctemplatedocument_create_object_v1_request);

ezdoctemplatedocument_create_object_v1_request_t *ezdoctemplatedocument_create_object_v1_request_parseFromJSON(cJSON *ezdoctemplatedocument_create_object_v1_requestJSON);

cJSON *ezdoctemplatedocument_create_object_v1_request_convertToJSON(ezdoctemplatedocument_create_object_v1_request_t *ezdoctemplatedocument_create_object_v1_request);

#endif /* _ezdoctemplatedocument_create_object_v1_request_H_ */

