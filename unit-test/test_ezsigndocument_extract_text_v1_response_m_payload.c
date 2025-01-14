#ifndef ezsigndocument_extract_text_v1_response_m_payload_TEST
#define ezsigndocument_extract_text_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_extract_text_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_extract_text_v1_response_m_payload.h"
ezsigndocument_extract_text_v1_response_m_payload_t* instantiate_ezsigndocument_extract_text_v1_response_m_payload(int include_optional);



ezsigndocument_extract_text_v1_response_m_payload_t* instantiate_ezsigndocument_extract_text_v1_response_m_payload(int include_optional) {
  ezsigndocument_extract_text_v1_response_m_payload_t* ezsigndocument_extract_text_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigndocument_extract_text_v1_response_m_payload = ezsigndocument_extract_text_v1_response_m_payload_create(
      "Text extract from document"
    );
  } else {
    ezsigndocument_extract_text_v1_response_m_payload = ezsigndocument_extract_text_v1_response_m_payload_create(
      "Text extract from document"
    );
  }

  return ezsigndocument_extract_text_v1_response_m_payload;
}


#ifdef ezsigndocument_extract_text_v1_response_m_payload_MAIN

void test_ezsigndocument_extract_text_v1_response_m_payload(int include_optional) {
    ezsigndocument_extract_text_v1_response_m_payload_t* ezsigndocument_extract_text_v1_response_m_payload_1 = instantiate_ezsigndocument_extract_text_v1_response_m_payload(include_optional);

	cJSON* jsonezsigndocument_extract_text_v1_response_m_payload_1 = ezsigndocument_extract_text_v1_response_m_payload_convertToJSON(ezsigndocument_extract_text_v1_response_m_payload_1);
	printf("ezsigndocument_extract_text_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigndocument_extract_text_v1_response_m_payload_1));
	ezsigndocument_extract_text_v1_response_m_payload_t* ezsigndocument_extract_text_v1_response_m_payload_2 = ezsigndocument_extract_text_v1_response_m_payload_parseFromJSON(jsonezsigndocument_extract_text_v1_response_m_payload_1);
	cJSON* jsonezsigndocument_extract_text_v1_response_m_payload_2 = ezsigndocument_extract_text_v1_response_m_payload_convertToJSON(ezsigndocument_extract_text_v1_response_m_payload_2);
	printf("repeating ezsigndocument_extract_text_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigndocument_extract_text_v1_response_m_payload_2));
}

int main() {
  test_ezsigndocument_extract_text_v1_response_m_payload(1);
  test_ezsigndocument_extract_text_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_extract_text_v1_response_m_payload_MAIN
#endif // ezsigndocument_extract_text_v1_response_m_payload_TEST
