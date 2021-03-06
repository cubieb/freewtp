#ifndef __KMOD_CAPWAP_PRIVATE_HEADER__
#define __KMOD_CAPWAP_PRIVATE_HEADER__

/* */
struct sc_capwap_workthread {
	struct task_struct* thread;

	struct sk_buff_head queue;
	wait_queue_head_t waitevent;
};

/* */
struct sc_station *sc_find_station(struct hlist_head *sta_head, uint8_t radioid, uint8_t *mac);

/* */
int sc_capwap_init(struct sc_capwap_session *sc_acsession, struct net *net);

/* */
void sc_capwap_resetsession(struct sc_capwap_session *sc_acsession);

/* */
int sc_capwap_sendkeepalive(struct sc_capwap_session *sc_acsession);

#endif /* __KMOD_CAPWAP_PRIVATE_HEADER__ */

