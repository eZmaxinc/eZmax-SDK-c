#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_request.h"


char* e_ezsignfolder_sendreminderfrequencyezsignfolder_request_ToString(ezmax_api_definition_ezsignfolder_request__e e_ezsignfolder_sendreminderfrequency) {
    char* e_ezsignfolder_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
	return e_ezsignfolder_sendreminderfrequencyArray[e_ezsignfolder_sendreminderfrequency];
}

ezmax_api_definition_ezsignfolder_request__e e_ezsignfolder_sendreminderfrequencyezsignfolder_request_FromString(char* e_ezsignfolder_sendreminderfrequency){
    int stringToReturn = 0;
    char *e_ezsignfolder_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
    size_t sizeofArray = sizeof(e_ezsignfolder_sendreminderfrequencyArray) / sizeof(e_ezsignfolder_sendreminderfrequencyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfolder_sendreminderfrequency, e_ezsignfolder_sendreminderfrequencyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignfolder_request_t *ezsignfolder_request_create(
    int fki_ezsignfoldertype_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    ) {
    ezsignfolder_request_t *ezsignfolder_request_local_var = malloc(sizeof(ezsignfolder_request_t));
    if (!ezsignfolder_request_local_var) {
        return NULL;
    }
    ezsignfolder_request_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignfolder_request_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfolder_request_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    ezsignfolder_request_local_var->t_ezsignfolder_note = t_ezsignfolder_note;
    ezsignfolder_request_local_var->e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;

    return ezsignfolder_request_local_var;
}


void ezsignfolder_request_free(ezsignfolder_request_t *ezsignfolder_request) {
    if(NULL == ezsignfolder_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_request->s_ezsignfolder_description) {
        free(ezsignfolder_request->s_ezsignfolder_description);
        ezsignfolder_request->s_ezsignfolder_description = NULL;
    }
    if (ezsignfolder_request->t_ezsignfolder_note) {
        free(ezsignfolder_request->t_ezsignfolder_note);
        ezsignfolder_request->t_ezsignfolder_note = NULL;
    }
    free(ezsignfolder_request);
}

cJSON *ezsignfolder_request_convertToJSON(ezsignfolder_request_t *ezsignfolder_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_request->fki_ezsignfoldertype_id
    if (!ezsignfolder_request->fki_ezsignfoldertype_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignfolder_request->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_request->fki_ezsigntsarequirement_id
    if (!ezsignfolder_request->fki_ezsigntsarequirement_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignfolder_request->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_request->s_ezsignfolder_description
    if (!ezsignfolder_request->s_ezsignfolder_description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_request->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_request->t_ezsignfolder_note
    if (!ezsignfolder_request->t_ezsignfolder_note) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "tEzsignfolderNote", ezsignfolder_request->t_ezsignfolder_note) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_request->e_ezsignfolder_sendreminderfrequency
    

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_request_t *ezsignfolder_request_parseFromJSON(cJSON *ezsignfolder_requestJSON){

    ezsignfolder_request_t *ezsignfolder_request_local_var = NULL;

    // ezsignfolder_request->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_requestJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_request->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_requestJSON, "fkiEzsigntsarequirementID");
    if (!fki_ezsigntsarequirement_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_request->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_requestJSON, "sEzsignfolderDescription");
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // ezsignfolder_request->t_ezsignfolder_note
    cJSON *t_ezsignfolder_note = cJSON_GetObjectItemCaseSensitive(ezsignfolder_requestJSON, "tEzsignfolderNote");
    if (!t_ezsignfolder_note) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignfolder_note))
    {
    goto end; //String
    }

    // ezsignfolder_request->e_ezsignfolder_sendreminderfrequency
    cJSON *e_ezsignfolder_sendreminderfrequency = cJSON_GetObjectItemCaseSensitive(ezsignfolder_requestJSON, "eEzsignfolderSendreminderfrequency");
    if (!e_ezsignfolder_sendreminderfrequency) {
        goto end;
    }



    ezsignfolder_request_local_var = ezsignfolder_request_create (
        fki_ezsignfoldertype_id->valuedouble,
        fki_ezsigntsarequirement_id->valuedouble,
        strdup(s_ezsignfolder_description->valuestring),
        strdup(t_ezsignfolder_note->valuestring),
        );

    return ezsignfolder_request_local_var;
end:
    return NULL;

}
