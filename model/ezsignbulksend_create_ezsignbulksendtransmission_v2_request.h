/*
 * ezsignbulksend_create_ezsignbulksendtransmission_v2_request.h
 *
 * Request for POST /1/object/ezsignbulksend/{pkiEzsignbulksendID}/createEzsignbulksendtransmission
 */

#ifndef _ezsignbulksend_create_ezsignbulksendtransmission_v2_request_H_
#define _ezsignbulksend_create_ezsignbulksendtransmission_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t;




typedef struct ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t {
    int fki_userlogintype_id; //numeric
    int fki_ezsigntsarequirement_id; //numeric
    char *s_ezsignbulksendtransmission_description; // string
    char *dt_ezsigndocument_duedate; // string
    int i_ezsignfolder_sendreminderfirstdays; //numeric
    int i_ezsignfolder_sendreminderotherdays; //numeric
    char *t_extra_message; // string
    char *s_csv_base64; //ByteArray

} ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t;

ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request_create(
    int fki_userlogintype_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignbulksendtransmission_description,
    char *dt_ezsigndocument_duedate,
    int i_ezsignfolder_sendreminderfirstdays,
    int i_ezsignfolder_sendreminderotherdays,
    char *t_extra_message,
    char *s_csv_base64
);

void ezsignbulksend_create_ezsignbulksendtransmission_v2_request_free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request);

ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request_parseFromJSON(cJSON *ezsignbulksend_create_ezsignbulksendtransmission_v2_requestJSON);

cJSON *ezsignbulksend_create_ezsignbulksendtransmission_v2_request_convertToJSON(ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request);

#endif /* _ezsignbulksend_create_ezsignbulksendtransmission_v2_request_H_ */

