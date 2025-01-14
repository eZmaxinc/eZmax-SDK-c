#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "textstylestatic_request.h"



textstylestatic_request_t *textstylestatic_request_create(
    int fki_font_id,
    int b_textstylestatic_bold,
    int b_textstylestatic_underline,
    int b_textstylestatic_italic,
    int b_textstylestatic_strikethrough,
    int i_textstylestatic_fontcolor,
    int i_textstylestatic_size
    ) {
    textstylestatic_request_t *textstylestatic_request_local_var = malloc(sizeof(textstylestatic_request_t));
    if (!textstylestatic_request_local_var) {
        return NULL;
    }
    textstylestatic_request_local_var->fki_font_id = fki_font_id;
    textstylestatic_request_local_var->b_textstylestatic_bold = b_textstylestatic_bold;
    textstylestatic_request_local_var->b_textstylestatic_underline = b_textstylestatic_underline;
    textstylestatic_request_local_var->b_textstylestatic_italic = b_textstylestatic_italic;
    textstylestatic_request_local_var->b_textstylestatic_strikethrough = b_textstylestatic_strikethrough;
    textstylestatic_request_local_var->i_textstylestatic_fontcolor = i_textstylestatic_fontcolor;
    textstylestatic_request_local_var->i_textstylestatic_size = i_textstylestatic_size;

    return textstylestatic_request_local_var;
}


void textstylestatic_request_free(textstylestatic_request_t *textstylestatic_request) {
    if(NULL == textstylestatic_request){
        return ;
    }
    listEntry_t *listEntry;
    free(textstylestatic_request);
}

cJSON *textstylestatic_request_convertToJSON(textstylestatic_request_t *textstylestatic_request) {
    cJSON *item = cJSON_CreateObject();

    // textstylestatic_request->fki_font_id
    if (!textstylestatic_request->fki_font_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiFontID", textstylestatic_request->fki_font_id) == NULL) {
    goto fail; //Numeric
    }


    // textstylestatic_request->b_textstylestatic_bold
    if (!textstylestatic_request->b_textstylestatic_bold) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTextstylestaticBold", textstylestatic_request->b_textstylestatic_bold) == NULL) {
    goto fail; //Bool
    }


    // textstylestatic_request->b_textstylestatic_underline
    if (!textstylestatic_request->b_textstylestatic_underline) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTextstylestaticUnderline", textstylestatic_request->b_textstylestatic_underline) == NULL) {
    goto fail; //Bool
    }


    // textstylestatic_request->b_textstylestatic_italic
    if (!textstylestatic_request->b_textstylestatic_italic) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTextstylestaticItalic", textstylestatic_request->b_textstylestatic_italic) == NULL) {
    goto fail; //Bool
    }


    // textstylestatic_request->b_textstylestatic_strikethrough
    if (!textstylestatic_request->b_textstylestatic_strikethrough) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bTextstylestaticStrikethrough", textstylestatic_request->b_textstylestatic_strikethrough) == NULL) {
    goto fail; //Bool
    }


    // textstylestatic_request->i_textstylestatic_fontcolor
    if (!textstylestatic_request->i_textstylestatic_fontcolor) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iTextstylestaticFontcolor", textstylestatic_request->i_textstylestatic_fontcolor) == NULL) {
    goto fail; //Numeric
    }


    // textstylestatic_request->i_textstylestatic_size
    if (!textstylestatic_request->i_textstylestatic_size) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iTextstylestaticSize", textstylestatic_request->i_textstylestatic_size) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

textstylestatic_request_t *textstylestatic_request_parseFromJSON(cJSON *textstylestatic_requestJSON){

    textstylestatic_request_t *textstylestatic_request_local_var = NULL;

    // textstylestatic_request->fki_font_id
    cJSON *fki_font_id = cJSON_GetObjectItemCaseSensitive(textstylestatic_requestJSON, "fkiFontID");
    if (!fki_font_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_font_id))
    {
    goto end; //Numeric
    }

    // textstylestatic_request->b_textstylestatic_bold
    cJSON *b_textstylestatic_bold = cJSON_GetObjectItemCaseSensitive(textstylestatic_requestJSON, "bTextstylestaticBold");
    if (!b_textstylestatic_bold) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_textstylestatic_bold))
    {
    goto end; //Bool
    }

    // textstylestatic_request->b_textstylestatic_underline
    cJSON *b_textstylestatic_underline = cJSON_GetObjectItemCaseSensitive(textstylestatic_requestJSON, "bTextstylestaticUnderline");
    if (!b_textstylestatic_underline) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_textstylestatic_underline))
    {
    goto end; //Bool
    }

    // textstylestatic_request->b_textstylestatic_italic
    cJSON *b_textstylestatic_italic = cJSON_GetObjectItemCaseSensitive(textstylestatic_requestJSON, "bTextstylestaticItalic");
    if (!b_textstylestatic_italic) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_textstylestatic_italic))
    {
    goto end; //Bool
    }

    // textstylestatic_request->b_textstylestatic_strikethrough
    cJSON *b_textstylestatic_strikethrough = cJSON_GetObjectItemCaseSensitive(textstylestatic_requestJSON, "bTextstylestaticStrikethrough");
    if (!b_textstylestatic_strikethrough) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_textstylestatic_strikethrough))
    {
    goto end; //Bool
    }

    // textstylestatic_request->i_textstylestatic_fontcolor
    cJSON *i_textstylestatic_fontcolor = cJSON_GetObjectItemCaseSensitive(textstylestatic_requestJSON, "iTextstylestaticFontcolor");
    if (!i_textstylestatic_fontcolor) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_textstylestatic_fontcolor))
    {
    goto end; //Numeric
    }

    // textstylestatic_request->i_textstylestatic_size
    cJSON *i_textstylestatic_size = cJSON_GetObjectItemCaseSensitive(textstylestatic_requestJSON, "iTextstylestaticSize");
    if (!i_textstylestatic_size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_textstylestatic_size))
    {
    goto end; //Numeric
    }


    textstylestatic_request_local_var = textstylestatic_request_create (
        fki_font_id->valuedouble,
        b_textstylestatic_bold->valueint,
        b_textstylestatic_underline->valueint,
        b_textstylestatic_italic->valueint,
        b_textstylestatic_strikethrough->valueint,
        i_textstylestatic_fontcolor->valuedouble,
        i_textstylestatic_size->valuedouble
        );

    return textstylestatic_request_local_var;
end:
    return NULL;

}
