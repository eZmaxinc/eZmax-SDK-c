#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussionmessage_request_patch.h"



discussionmessage_request_patch_t *discussionmessage_request_patch_create(
    int fki_discussionmembership_id_actionrequired,
    char *t_discussionmessage_content
    ) {
    discussionmessage_request_patch_t *discussionmessage_request_patch_local_var = malloc(sizeof(discussionmessage_request_patch_t));
    if (!discussionmessage_request_patch_local_var) {
        return NULL;
    }
    discussionmessage_request_patch_local_var->fki_discussionmembership_id_actionrequired = fki_discussionmembership_id_actionrequired;
    discussionmessage_request_patch_local_var->t_discussionmessage_content = t_discussionmessage_content;

    return discussionmessage_request_patch_local_var;
}


void discussionmessage_request_patch_free(discussionmessage_request_patch_t *discussionmessage_request_patch) {
    if(NULL == discussionmessage_request_patch){
        return ;
    }
    listEntry_t *listEntry;
    if (discussionmessage_request_patch->t_discussionmessage_content) {
        free(discussionmessage_request_patch->t_discussionmessage_content);
        discussionmessage_request_patch->t_discussionmessage_content = NULL;
    }
    free(discussionmessage_request_patch);
}

cJSON *discussionmessage_request_patch_convertToJSON(discussionmessage_request_patch_t *discussionmessage_request_patch) {
    cJSON *item = cJSON_CreateObject();

    // discussionmessage_request_patch->fki_discussionmembership_id_actionrequired
    if(discussionmessage_request_patch->fki_discussionmembership_id_actionrequired) {
    if(cJSON_AddNumberToObject(item, "fkiDiscussionmembershipIDActionrequired", discussionmessage_request_patch->fki_discussionmembership_id_actionrequired) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmessage_request_patch->t_discussionmessage_content
    if(discussionmessage_request_patch->t_discussionmessage_content) {
    if(cJSON_AddStringToObject(item, "tDiscussionmessageContent", discussionmessage_request_patch->t_discussionmessage_content) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussionmessage_request_patch_t *discussionmessage_request_patch_parseFromJSON(cJSON *discussionmessage_request_patchJSON){

    discussionmessage_request_patch_t *discussionmessage_request_patch_local_var = NULL;

    // discussionmessage_request_patch->fki_discussionmembership_id_actionrequired
    cJSON *fki_discussionmembership_id_actionrequired = cJSON_GetObjectItemCaseSensitive(discussionmessage_request_patchJSON, "fkiDiscussionmembershipIDActionrequired");
    if (fki_discussionmembership_id_actionrequired) { 
    if(!cJSON_IsNumber(fki_discussionmembership_id_actionrequired))
    {
    goto end; //Numeric
    }
    }

    // discussionmessage_request_patch->t_discussionmessage_content
    cJSON *t_discussionmessage_content = cJSON_GetObjectItemCaseSensitive(discussionmessage_request_patchJSON, "tDiscussionmessageContent");
    if (t_discussionmessage_content) { 
    if(!cJSON_IsString(t_discussionmessage_content) && !cJSON_IsNull(t_discussionmessage_content))
    {
    goto end; //String
    }
    }


    discussionmessage_request_patch_local_var = discussionmessage_request_patch_create (
        fki_discussionmembership_id_actionrequired ? fki_discussionmembership_id_actionrequired->valuedouble : 0,
        t_discussionmessage_content && !cJSON_IsNull(t_discussionmessage_content) ? strdup(t_discussionmessage_content->valuestring) : NULL
        );

    return discussionmessage_request_patch_local_var;
end:
    return NULL;

}
