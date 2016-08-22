#ifndef __CAPWAP_ELEMENT_80211_WTPRADIOINFORMATION_HEADER__
#define __CAPWAP_ELEMENT_80211_WTPRADIOINFORMATION_HEADER__

#define CAPWAP_ELEMENT_80211_WTPRADIOINFORMATION_VENDOR			0
#define CAPWAP_ELEMENT_80211_WTPRADIOINFORMATION_TYPE			1048
#define CAPWAP_ELEMENT_80211_WTPRADIOINFORMATION				(struct capwap_message_element_id){ .vendor = CAPWAP_ELEMENT_80211_WTPRADIOINFORMATION_VENDOR, .type = CAPWAP_ELEMENT_80211_WTPRADIOINFORMATION_TYPE }


#define CAPWAP_RADIO_TYPE_80211B			0x00000001
#define CAPWAP_RADIO_TYPE_80211A			0x00000002
#define CAPWAP_RADIO_TYPE_80211G			0x00000004
#define CAPWAP_RADIO_TYPE_80211N			0x00000008
#define CAPWAP_RADIO_TYPE_MASK				0x0000000f

struct capwap_80211_wtpradioinformation_element {
	uint8_t radioid;
	uint32_t radiotype;
};

extern const struct capwap_message_elements_ops capwap_element_80211_wtpradioinformation_ops;

#endif /* __CAPWAP_ELEMENT_80211_WTPRADIOINFORMATION_HEADER__ */