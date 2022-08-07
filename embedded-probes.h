#ifndef embedded_probes_h
#define embedded_probes_h

extern FILE *quicly_trace_fp;

#define QUICLY_CONNECT_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_CONNECT(struct st_quicly_conn_t * arg0, int64_t arg1, uint32_t arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"connect\", \"conn\":%u, \"time\":%lld, \"version\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2);
}

#define QUICLY_ACCEPT_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_ACCEPT(struct st_quicly_conn_t * arg0, int64_t arg1, const char * arg2, struct st_quicly_address_token_plaintext_t * arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"accept\", \"conn\":%u, \"time\":%lld, \"dcid\":\"%s\", \"address-token\":\"0x%llx\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, arg2, (unsigned long long)arg3);
}

#define QUICLY_FREE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_FREE(struct st_quicly_conn_t * arg0, int64_t arg1)
{
    fprintf(quicly_trace_fp, "{\"type\":\"free\", \"conn\":%u, \"time\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1);
}

#define QUICLY_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, int arg2, const char * arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"send\", \"conn\":%u, \"time\":%lld, \"state\":%lld, \"dcid\":\"%s\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2, arg3);
}

#define QUICLY_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, const char * arg2, const void * arg3, size_t arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"receive\", \"conn\":%u, \"time\":%lld, \"dcid\":\"%s\", \"bytes\":\"0x%llx\", \"first-octet\":%u, \"bytes-len\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, arg2, (unsigned long long)arg3, *(uint8_t *)arg3, (unsigned long long)arg4);
}

#define QUICLY_VERSION_SWITCH_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_VERSION_SWITCH(struct st_quicly_conn_t * arg0, int64_t arg1, uint32_t arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"version-switch\", \"conn\":%u, \"time\":%lld, \"new-version\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2);
}

#define QUICLY_IDLE_TIMEOUT_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_IDLE_TIMEOUT(struct st_quicly_conn_t * arg0, int64_t arg1)
{
    fprintf(quicly_trace_fp, "{\"type\":\"idle-timeout\", \"conn\":%u, \"time\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1);
}

#define QUICLY_HANDSHAKE_TIMEOUT_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_HANDSHAKE_TIMEOUT(struct st_quicly_conn_t * arg0, int64_t arg1, int64_t arg2, uint32_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"handshake-timeout\", \"conn\":%u, \"time\":%lld, \"elapsed\":%lld, \"rtt-smoothed\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2, (unsigned long long)arg3);
}

#define QUICLY_INITIAL_HANDSHAKE_PACKET_EXCEED_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_INITIAL_HANDSHAKE_PACKET_EXCEED(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"initial-handshake-packet-exceed\", \"conn\":%u, \"time\":%lld, \"num-packets\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2);
}

#define QUICLY_STATELESS_RESET_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STATELESS_RESET_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stateless-reset-receive\", \"conn\":%u, \"time\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1);
}

#define QUICLY_CRYPTO_HANDSHAKE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_CRYPTO_HANDSHAKE(struct st_quicly_conn_t * arg0, int64_t arg1, int arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"crypto-handshake\", \"conn\":%u, \"time\":%lld, \"ret\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2);
}

#define QUICLY_CRYPTO_UPDATE_SECRET_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_CRYPTO_UPDATE_SECRET(struct st_quicly_conn_t * arg0, int64_t arg1, int arg2, uint8_t arg3, const char * arg4, const char * arg5)
{
    fprintf(quicly_trace_fp, "{\"type\":\"crypto-update-secret\", \"conn\":%u, \"time\":%lld, \"is-enc\":%lld, \"epoch\":%llu, \"label\":\"%s\", \"secret\":\"%s\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2, (unsigned long long)arg3, arg4, arg5);
}

#define QUICLY_CRYPTO_SEND_KEY_UPDATE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_CRYPTO_SEND_KEY_UPDATE(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, const char * arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"crypto-send-key-update\", \"conn\":%u, \"time\":%lld, \"phase\":%llu, \"secret\":\"%s\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, arg3);
}

#define QUICLY_CRYPTO_SEND_KEY_UPDATE_CONFIRMED_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_CRYPTO_SEND_KEY_UPDATE_CONFIRMED(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"crypto-send-key-update-confirmed\", \"conn\":%u, \"time\":%lld, \"next-pn\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2);
}

#define QUICLY_CRYPTO_RECEIVE_KEY_UPDATE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_CRYPTO_RECEIVE_KEY_UPDATE(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, const char * arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"crypto-receive-key-update\", \"conn\":%u, \"time\":%lld, \"phase\":%llu, \"secret\":\"%s\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, arg3);
}

#define QUICLY_CRYPTO_RECEIVE_KEY_UPDATE_PREPARE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_CRYPTO_RECEIVE_KEY_UPDATE_PREPARE(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, const char * arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"crypto-receive-key-update-prepare\", \"conn\":%u, \"time\":%lld, \"phase\":%llu, \"secret\":\"%s\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, arg3);
}

#define QUICLY_PACKET_SENT_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_PACKET_SENT(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, size_t arg3, uint8_t arg4, int arg5)
{
    fprintf(quicly_trace_fp, "{\"type\":\"packet-sent\", \"conn\":%u, \"time\":%lld, \"pn\":%llu, \"len\":%llu, \"packet-type\":%llu, \"ack-only\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3, (unsigned long long)arg4, (long long)arg5);
}

#define QUICLY_PACKET_RECEIVED_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_PACKET_RECEIVED(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, const void * arg3, size_t arg4, uint8_t arg5)
{
    fprintf(quicly_trace_fp, "{\"type\":\"packet-received\", \"conn\":%u, \"time\":%lld, \"pn\":%llu, \"decrypted\":\"0x%llx\", \"decrypted-len\":%llu, \"packet-type\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3, (unsigned long long)arg4, (unsigned long long)arg5);
}

#define QUICLY_PACKET_PREPARE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_PACKET_PREPARE(struct st_quicly_conn_t * arg0, int64_t arg1, uint8_t arg2, const char * arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"packet-prepare\", \"conn\":%u, \"time\":%lld, \"first-octet\":%llu, \"dcid\":\"%s\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, arg3);
}

#define QUICLY_PACKET_ACKED_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_PACKET_ACKED(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, int arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"packet-acked\", \"conn\":%u, \"time\":%lld, \"pn\":%llu, \"is-late-ack\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (long long)arg3);
}

#define QUICLY_PACKET_LOST_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_PACKET_LOST(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, uint8_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"packet-lost\", \"conn\":%u, \"time\":%lld, \"pn\":%llu, \"packet-type\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3);
}

#define QUICLY_PACKET_DECRYPTION_FAILED_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_PACKET_DECRYPTION_FAILED(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"packet-decryption-failed\", \"conn\":%u, \"time\":%lld, \"pn\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2);
}

#define QUICLY_PTO_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_PTO(struct st_quicly_conn_t * arg0, int64_t arg1, size_t arg2, uint32_t arg3, int8_t arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"pto\", \"conn\":%u, \"time\":%lld, \"inflight\":%llu, \"cwnd\":%llu, \"pto-count\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3, (long long)arg4);
}

#define QUICLY_CC_ACK_RECEIVED_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_CC_ACK_RECEIVED(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, size_t arg3, uint32_t arg4, size_t arg5)
{
    fprintf(quicly_trace_fp, "{\"type\":\"cc-ack-received\", \"conn\":%u, \"time\":%lld, \"largest-acked\":%llu, \"bytes-acked\":%llu, \"cwnd\":%llu, \"inflight\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3, (unsigned long long)arg4, (unsigned long long)arg5);
}

#define QUICLY_CC_CONGESTION_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_CC_CONGESTION(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, size_t arg3, uint32_t arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"cc-congestion\", \"conn\":%u, \"time\":%lld, \"max-lost-pn\":%llu, \"inflight\":%llu, \"cwnd\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3, (unsigned long long)arg4);
}

#define QUICLY_ACK_BLOCK_RECEIVED_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_ACK_BLOCK_RECEIVED(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, uint64_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"ack-block-received\", \"conn\":%u, \"time\":%lld, \"ack-block-begin\":%llu, \"ack-block-end\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3);
}

#define QUICLY_ACK_DELAY_RECEIVED_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_ACK_DELAY_RECEIVED(struct st_quicly_conn_t * arg0, int64_t arg1, int64_t arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"ack-delay-received\", \"conn\":%u, \"time\":%lld, \"ack-delay\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2);
}

#define QUICLY_ACK_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_ACK_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, uint64_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"ack-send\", \"conn\":%u, \"time\":%lld, \"largest-acked\":%llu, \"ack-delay\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3);
}

#define QUICLY_PING_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_PING_SEND(struct st_quicly_conn_t * arg0, int64_t arg1)
{
    fprintf(quicly_trace_fp, "{\"type\":\"ping-send\", \"conn\":%u, \"time\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1);
}

#define QUICLY_PING_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_PING_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1)
{
    fprintf(quicly_trace_fp, "{\"type\":\"ping-receive\", \"conn\":%u, \"time\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1);
}

#define QUICLY_TRANSPORT_CLOSE_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_TRANSPORT_CLOSE_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, uint64_t arg3, const char * arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"transport-close-send\", \"conn\":%u, \"time\":%lld, \"error-code\":%llu, \"frame-type\":%llu, \"reason-phrase\":\"%s\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3, arg4);
}

#define QUICLY_TRANSPORT_CLOSE_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_TRANSPORT_CLOSE_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, uint64_t arg3, const char * arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"transport-close-receive\", \"conn\":%u, \"time\":%lld, \"error-code\":%llu, \"frame-type\":%llu, \"reason-phrase\":\"%s\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3, arg4);
}

#define QUICLY_APPLICATION_CLOSE_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_APPLICATION_CLOSE_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, const char * arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"application-close-send\", \"conn\":%u, \"time\":%lld, \"error-code\":%llu, \"reason-phrase\":\"%s\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, arg3);
}

#define QUICLY_APPLICATION_CLOSE_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_APPLICATION_CLOSE_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, const char * arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"application-close-receive\", \"conn\":%u, \"time\":%lld, \"error-code\":%llu, \"reason-phrase\":\"%s\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, arg3);
}

#define QUICLY_STREAM_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAM_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, struct st_quicly_stream_t * arg2, uint64_t arg3, size_t arg4, int arg5)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stream-send\", \"conn\":%u, \"time\":%lld, \"stream-id\":%d, \"off\":%llu, \"len\":%llu, \"is-fin\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (int)arg2->stream_id, (unsigned long long)arg3, (unsigned long long)arg4, (long long)arg5);
}

#define QUICLY_STREAM_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAM_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, struct st_quicly_stream_t * arg2, uint64_t arg3, size_t arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stream-receive\", \"conn\":%u, \"time\":%lld, \"stream-id\":%d, \"off\":%llu, \"len\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (int)arg2->stream_id, (unsigned long long)arg3, (unsigned long long)arg4);
}

#define QUICLY_STREAM_ACKED_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAM_ACKED(struct st_quicly_conn_t * arg0, int64_t arg1, int64_t arg2, uint64_t arg3, size_t arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stream-acked\", \"conn\":%u, \"time\":%lld, \"stream-id\":%lld, \"off\":%llu, \"len\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2, (unsigned long long)arg3, (unsigned long long)arg4);
}

#define QUICLY_STREAM_LOST_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAM_LOST(struct st_quicly_conn_t * arg0, int64_t arg1, int64_t arg2, uint64_t arg3, size_t arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stream-lost\", \"conn\":%u, \"time\":%lld, \"stream-id\":%lld, \"off\":%llu, \"len\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2, (unsigned long long)arg3, (unsigned long long)arg4);
}

#define QUICLY_RESET_STREAM_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_RESET_STREAM_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, int64_t arg2, uint16_t arg3, uint64_t arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"reset-stream-send\", \"conn\":%u, \"time\":%lld, \"stream-id\":%lld, \"error-code\":%llu, \"final-size\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2, (unsigned long long)arg3, (unsigned long long)arg4);
}

#define QUICLY_RESET_STREAM_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_RESET_STREAM_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, int64_t arg2, uint16_t arg3, uint64_t arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"reset-stream-receive\", \"conn\":%u, \"time\":%lld, \"stream-id\":%lld, \"error-code\":%llu, \"final-size\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2, (unsigned long long)arg3, (unsigned long long)arg4);
}

#define QUICLY_STOP_SENDING_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STOP_SENDING_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, int64_t arg2, uint16_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stop-sending-send\", \"conn\":%u, \"time\":%lld, \"stream-id\":%lld, \"error-code\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2, (unsigned long long)arg3);
}

#define QUICLY_STOP_SENDING_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STOP_SENDING_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, int64_t arg2, uint16_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stop-sending-receive\", \"conn\":%u, \"time\":%lld, \"stream-id\":%lld, \"error-code\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2, (unsigned long long)arg3);
}

#define QUICLY_MAX_DATA_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_MAX_DATA_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"max-data-send\", \"conn\":%u, \"time\":%lld, \"maximum\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2);
}

#define QUICLY_MAX_DATA_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_MAX_DATA_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"max-data-receive\", \"conn\":%u, \"time\":%lld, \"maximum\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2);
}

#define QUICLY_MAX_STREAMS_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_MAX_STREAMS_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, int arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"max-streams-send\", \"conn\":%u, \"time\":%lld, \"maximum\":%llu, \"is-unidirectional\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (long long)arg3);
}

#define QUICLY_MAX_STREAMS_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_MAX_STREAMS_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, int arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"max-streams-receive\", \"conn\":%u, \"time\":%lld, \"maximum\":%llu, \"is-unidirectional\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (long long)arg3);
}

#define QUICLY_MAX_STREAM_DATA_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_MAX_STREAM_DATA_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, struct st_quicly_stream_t * arg2, uint64_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"max-stream-data-send\", \"conn\":%u, \"time\":%lld, \"stream-id\":%d, \"maximum\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (int)arg2->stream_id, (unsigned long long)arg3);
}

#define QUICLY_MAX_STREAM_DATA_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_MAX_STREAM_DATA_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, int64_t arg2, uint64_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"max-stream-data-receive\", \"conn\":%u, \"time\":%lld, \"stream-id\":%lld, \"maximum\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2, (unsigned long long)arg3);
}

#define QUICLY_NEW_TOKEN_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_NEW_TOKEN_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, uint8_t * arg2, size_t arg3, uint64_t arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"new-token-send\", \"conn\":%u, \"time\":%lld, \"token\":\"0x%llx\", \"token-len\":%llu, \"generation\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3, (unsigned long long)arg4);
}

#define QUICLY_NEW_TOKEN_ACKED_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_NEW_TOKEN_ACKED(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"new-token-acked\", \"conn\":%u, \"time\":%lld, \"generation\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2);
}

#define QUICLY_NEW_TOKEN_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_NEW_TOKEN_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, uint8_t * arg2, size_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"new-token-receive\", \"conn\":%u, \"time\":%lld, \"token\":\"0x%llx\", \"token-len\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3);
}

#define QUICLY_HANDSHAKE_DONE_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_HANDSHAKE_DONE_SEND(struct st_quicly_conn_t * arg0, int64_t arg1)
{
    fprintf(quicly_trace_fp, "{\"type\":\"handshake-done-send\", \"conn\":%u, \"time\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1);
}

#define QUICLY_HANDSHAKE_DONE_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_HANDSHAKE_DONE_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1)
{
    fprintf(quicly_trace_fp, "{\"type\":\"handshake-done-receive\", \"conn\":%u, \"time\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1);
}

#define QUICLY_STREAMS_BLOCKED_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAMS_BLOCKED_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, int arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"streams-blocked-send\", \"conn\":%u, \"time\":%lld, \"maximum\":%llu, \"is-unidirectional\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (long long)arg3);
}

#define QUICLY_STREAMS_BLOCKED_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAMS_BLOCKED_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, int arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"streams-blocked-receive\", \"conn\":%u, \"time\":%lld, \"maximum\":%llu, \"is-unidirectional\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (long long)arg3);
}

#define QUICLY_NEW_CONNECTION_ID_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_NEW_CONNECTION_ID_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, uint64_t arg3, const char * arg4, const char * arg5)
{
    fprintf(quicly_trace_fp, "{\"type\":\"new-connection-id-send\", \"conn\":%u, \"time\":%lld, \"sequence\":%llu, \"retire-prior-to\":%llu, \"cid\":\"%s\", \"stateless-reset-token\":\"%s\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3, arg4, arg5);
}

#define QUICLY_NEW_CONNECTION_ID_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_NEW_CONNECTION_ID_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, uint64_t arg3, const char * arg4, const char * arg5)
{
    fprintf(quicly_trace_fp, "{\"type\":\"new-connection-id-receive\", \"conn\":%u, \"time\":%lld, \"sequence\":%llu, \"retire-prior-to\":%llu, \"cid\":\"%s\", \"stateless-reset-token\":\"%s\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3, arg4, arg5);
}

#define QUICLY_RETIRE_CONNECTION_ID_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_RETIRE_CONNECTION_ID_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"retire-connection-id-send\", \"conn\":%u, \"time\":%lld, \"sequence\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2);
}

#define QUICLY_RETIRE_CONNECTION_ID_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_RETIRE_CONNECTION_ID_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"retire-connection-id-receive\", \"conn\":%u, \"time\":%lld, \"sequence\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2);
}

#define QUICLY_DATA_BLOCKED_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_DATA_BLOCKED_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"data-blocked-send\", \"conn\":%u, \"time\":%lld, \"off\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2);
}

#define QUICLY_DATA_BLOCKED_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_DATA_BLOCKED_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"data-blocked-receive\", \"conn\":%u, \"time\":%lld, \"off\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2);
}

#define QUICLY_STREAM_DATA_BLOCKED_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAM_DATA_BLOCKED_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, int64_t arg2, uint64_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stream-data-blocked-send\", \"conn\":%u, \"time\":%lld, \"stream-id\":%lld, \"maximum\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2, (unsigned long long)arg3);
}

#define QUICLY_STREAM_DATA_BLOCKED_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAM_DATA_BLOCKED_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, int64_t arg2, uint64_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stream-data-blocked-receive\", \"conn\":%u, \"time\":%lld, \"stream-id\":%lld, \"maximum\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2, (unsigned long long)arg3);
}

#define QUICLY_DATAGRAM_SEND_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_DATAGRAM_SEND(struct st_quicly_conn_t * arg0, int64_t arg1, const void * arg2, size_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"datagram-send\", \"conn\":%u, \"time\":%lld, \"payload\":\"0x%llx\", \"payload-len\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3);
}

#define QUICLY_DATAGRAM_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_DATAGRAM_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, const void * arg2, size_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"datagram-receive\", \"conn\":%u, \"time\":%lld, \"payload\":\"0x%llx\", \"payload-len\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3);
}

#define QUICLY_ACK_FREQUENCY_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_ACK_FREQUENCY_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, int arg5, int arg6)
{
    fprintf(quicly_trace_fp, "{\"type\":\"ack-frequency-receive\", \"conn\":%u, \"time\":%lld, \"sequence\":%llu, \"packet-tolerance\":%llu, \"max-ack-delay\":%llu, \"ignore-order\":%lld, \"ignore-ce\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (unsigned long long)arg2, (unsigned long long)arg3, (unsigned long long)arg4, (long long)arg5, (long long)arg6);
}

#define QUICLY_QUICTRACE_SEND_STREAM_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_QUICTRACE_SEND_STREAM(struct st_quicly_conn_t * arg0, int64_t arg1, struct st_quicly_stream_t * arg2, uint64_t arg3, size_t arg4, int arg5)
{
    fprintf(quicly_trace_fp, "{\"type\":\"quictrace-send-stream\", \"conn\":%u, \"time\":%lld, \"stream-id\":%d, \"off\":%llu, \"len\":%llu, \"fin\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (int)arg2->stream_id, (unsigned long long)arg3, (unsigned long long)arg4, (long long)arg5);
}

#define QUICLY_QUICTRACE_RECV_STREAM_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_QUICTRACE_RECV_STREAM(struct st_quicly_conn_t * arg0, int64_t arg1, int64_t arg2, uint64_t arg3, size_t arg4, int arg5)
{
    fprintf(quicly_trace_fp, "{\"type\":\"quictrace-recv-stream\", \"conn\":%u, \"time\":%lld, \"stream-id\":%lld, \"off\":%llu, \"len\":%llu, \"fin\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (long long)arg2, (unsigned long long)arg3, (unsigned long long)arg4, (long long)arg5);
}

#define QUICLY_QUICTRACE_CC_ACK_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_QUICTRACE_CC_ACK(struct st_quicly_conn_t * arg0, int64_t arg1, struct quicly_rtt_t * arg2, uint32_t arg3, size_t arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"quictrace-cc-ack\", \"conn\":%u, \"time\":%lld, \"min-rtt\":%u, \"smoothed-rtt\":%u, \"latest-rtt\":%u, \"cwnd\":%llu, \"inflight\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, arg2->minimum, arg2->smoothed, arg2->latest, (unsigned long long)arg3, (unsigned long long)arg4);
}

#define QUICLY_QUICTRACE_CC_LOST_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_QUICTRACE_CC_LOST(struct st_quicly_conn_t * arg0, int64_t arg1, struct quicly_rtt_t * arg2, uint32_t arg3, size_t arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"quictrace-cc-lost\", \"conn\":%u, \"time\":%lld, \"min-rtt\":%u, \"smoothed-rtt\":%u, \"latest-rtt\":%u, \"cwnd\":%llu, \"inflight\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, arg2->minimum, arg2->smoothed, arg2->latest, (unsigned long long)arg3, (unsigned long long)arg4);
}

#define QUICLY_STREAM_ON_OPEN_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAM_ON_OPEN(struct st_quicly_conn_t * arg0, int64_t arg1, struct st_quicly_stream_t * arg2)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stream-on-open\", \"conn\":%u, \"time\":%lld, \"stream-id\":%d}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (int)arg2->stream_id);
}

#define QUICLY_STREAM_ON_DESTROY_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAM_ON_DESTROY(struct st_quicly_conn_t * arg0, int64_t arg1, struct st_quicly_stream_t * arg2, int arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stream-on-destroy\", \"conn\":%u, \"time\":%lld, \"stream-id\":%d, \"err\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (int)arg2->stream_id, (long long)arg3);
}

#define QUICLY_STREAM_ON_SEND_SHIFT_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAM_ON_SEND_SHIFT(struct st_quicly_conn_t * arg0, int64_t arg1, struct st_quicly_stream_t * arg2, size_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stream-on-send-shift\", \"conn\":%u, \"time\":%lld, \"stream-id\":%d, \"delta\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (int)arg2->stream_id, (unsigned long long)arg3);
}

#define QUICLY_STREAM_ON_SEND_EMIT_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAM_ON_SEND_EMIT(struct st_quicly_conn_t * arg0, int64_t arg1, struct st_quicly_stream_t * arg2, size_t arg3, size_t arg4)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stream-on-send-emit\", \"conn\":%u, \"time\":%lld, \"stream-id\":%d, \"off\":%llu, \"capacity\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (int)arg2->stream_id, (unsigned long long)arg3, (unsigned long long)arg4);
}

#define QUICLY_STREAM_ON_SEND_STOP_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAM_ON_SEND_STOP(struct st_quicly_conn_t * arg0, int64_t arg1, struct st_quicly_stream_t * arg2, int arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stream-on-send-stop\", \"conn\":%u, \"time\":%lld, \"stream-id\":%d, \"err\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (int)arg2->stream_id, (long long)arg3);
}

#define QUICLY_STREAM_ON_RECEIVE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAM_ON_RECEIVE(struct st_quicly_conn_t * arg0, int64_t arg1, struct st_quicly_stream_t * arg2, size_t arg3, const void * arg4, size_t arg5)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stream-on-receive\", \"conn\":%u, \"time\":%lld, \"stream-id\":%d, \"off\":%llu, \"src\":\"0x%llx\", \"src-len\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (int)arg2->stream_id, (unsigned long long)arg3, (unsigned long long)arg4, (unsigned long long)arg5);
}

#define QUICLY_STREAM_ON_RECEIVE_RESET_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_STREAM_ON_RECEIVE_RESET(struct st_quicly_conn_t * arg0, int64_t arg1, struct st_quicly_stream_t * arg2, int arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"stream-on-receive-reset\", \"conn\":%u, \"time\":%lld, \"stream-id\":%d, \"err\":%lld}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, (int)arg2->stream_id, (long long)arg3);
}

#define QUICLY_DEBUG_MESSAGE_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_DEBUG_MESSAGE(struct st_quicly_conn_t * arg0, const char * arg1, int arg2, const char * arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"debug-message\", \"conn\":%u, \"function\":\"%s\", \"line\":%lld, \"message\":\"%s\"}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, arg1, (long long)arg2, arg3);
}

#define QUICLY_CONN_STATS_ENABLED() (quicly_trace_fp != NULL)

static void QUICLY_CONN_STATS(struct st_quicly_conn_t * arg0, int64_t arg1, struct st_quicly_stats_t * arg2, size_t arg3)
{
    fprintf(quicly_trace_fp, "{\"type\":\"conn-stats\", \"conn\":%u, \"time\":%lld, \"rtt_minimum\":%u, \"rtt_smoothed\":%u, \"rtt_variance\":%u, \"cc_cwnd\":%u, \"cc_ssthresh\":%u, \"cc_cwnd_initial\":%u, \"cc_cwnd_exiting_slow_start\":%u, \"cc_cwnd_minimum\":%u, \"cc_cwnd_maximum\":%u, \"cc_num_loss_episodes\":%u, \"num_packets_sent\":%" PRIu64 ", \"num_packets_ack_received\":%" PRIu64 ", \"num_packets_lost\":%" PRIu64 ", \"num_packets_lost_time_threshold\":%" PRIu64 ", \"num_packets_late_acked\":%" PRIu64 ", \"num_packets_received\":%" PRIu64 ", \"num_packets_decryption_failed\":%" PRIu64 ", \"num_bytes_sent\":%" PRIu64 ", \"num_bytes_received\":%" PRIu64 ", \"num_frames_sent_padding\":%" PRIu64 ", \"num_frames_sent_ping\":%" PRIu64 ", \"num_frames_sent_ack\":%" PRIu64 ", \"num_frames_sent_reset_stream\":%" PRIu64 ", \"num_frames_sent_stop_sending\":%" PRIu64 ", \"num_frames_sent_crypto\":%" PRIu64 ", \"num_frames_sent_new_token\":%" PRIu64 ", \"num_frames_sent_stream\":%" PRIu64 ", \"num_frames_sent_max_data\":%" PRIu64 ", \"num_frames_sent_max_stream_data\":%" PRIu64 ", \"num_frames_sent_max_streams_bidi\":%" PRIu64 ", \"num_frames_sent_max_streams_uni\":%" PRIu64 ", \"num_frames_sent_data_blocked\":%" PRIu64 ", \"num_frames_sent_stream_data_blocked\":%" PRIu64 ", \"num_frames_sent_streams_blocked\":%" PRIu64 ", \"num_frames_sent_new_connection_id\":%" PRIu64 ", \"num_frames_sent_retire_connection_id\":%" PRIu64 ", \"num_frames_sent_path_challenge\":%" PRIu64 ", \"num_frames_sent_path_response\":%" PRIu64 ", \"num_frames_sent_transport_close\":%" PRIu64 ", \"num_frames_sent_application_close\":%" PRIu64 ", \"num_frames_sent_handshake_done\":%" PRIu64 ", \"num_frames_sent_ack_frequency\":%" PRIu64 ", \"num_frames_received_padding\":%" PRIu64 ", \"num_frames_received_ping\":%" PRIu64 ", \"num_frames_received_ack\":%" PRIu64 ", \"num_frames_received_reset_stream\":%" PRIu64 ", \"num_frames_received_stop_sending\":%" PRIu64 ", \"num_frames_received_crypto\":%" PRIu64 ", \"num_frames_received_new_token\":%" PRIu64 ", \"num_frames_received_stream\":%" PRIu64 ", \"num_frames_received_max_data\":%" PRIu64 ", \"num_frames_received_max_stream_data\":%" PRIu64 ", \"num_frames_received_max_streams_bidi\":%" PRIu64 ", \"num_frames_received_max_streams_uni\":%" PRIu64 ", \"num_frames_received_data_blocked\":%" PRIu64 ", \"num_frames_received_stream_data_blocked\":%" PRIu64 ", \"num_frames_received_streams_blocked\":%" PRIu64 ", \"num_frames_received_new_connection_id\":%" PRIu64 ", \"num_frames_received_retire_connection_id\":%" PRIu64 ", \"num_frames_received_path_challenge\":%" PRIu64 ", \"num_frames_received_path_response\":%" PRIu64 ", \"num_frames_received_transport_close\":%" PRIu64 ", \"num_frames_received_application_close\":%" PRIu64 ", \"num_frames_received_handshake_done\":%" PRIu64 ", \"num_frames_received_ack_frequency\":%" PRIu64 ", \"num_ptos\":%" PRIu64 ", \"cc_type\":\"%s\", \"size\":%llu}\n", arg0 != NULL ? ((struct _st_quicly_conn_public_t *)arg0)->local.cid_set.plaintext.master_id : 0, (long long)arg1, arg2->rtt.minimum, arg2->rtt.smoothed, arg2->rtt.variance, arg2->cc.cwnd, arg2->cc.ssthresh, arg2->cc.cwnd_initial, arg2->cc.cwnd_exiting_slow_start, arg2->cc.cwnd_minimum, arg2->cc.cwnd_maximum, arg2->cc.num_loss_episodes, arg2->num_packets.sent, arg2->num_packets.ack_received, arg2->num_packets.lost, arg2->num_packets.lost_time_threshold, arg2->num_packets.late_acked, arg2->num_packets.received, arg2->num_packets.decryption_failed, arg2->num_bytes.sent, arg2->num_bytes.received, arg2->num_frames_sent.padding, arg2->num_frames_sent.ping, arg2->num_frames_sent.ack, arg2->num_frames_sent.reset_stream, arg2->num_frames_sent.stop_sending, arg2->num_frames_sent.crypto, arg2->num_frames_sent.new_token, arg2->num_frames_sent.stream, arg2->num_frames_sent.max_data, arg2->num_frames_sent.max_stream_data, arg2->num_frames_sent.max_streams_bidi, arg2->num_frames_sent.max_streams_uni, arg2->num_frames_sent.data_blocked, arg2->num_frames_sent.stream_data_blocked, arg2->num_frames_sent.streams_blocked, arg2->num_frames_sent.new_connection_id, arg2->num_frames_sent.retire_connection_id, arg2->num_frames_sent.path_challenge, arg2->num_frames_sent.path_response, arg2->num_frames_sent.transport_close, arg2->num_frames_sent.application_close, arg2->num_frames_sent.handshake_done, arg2->num_frames_sent.ack_frequency, arg2->num_frames_received.padding, arg2->num_frames_received.ping, arg2->num_frames_received.ack, arg2->num_frames_received.reset_stream, arg2->num_frames_received.stop_sending, arg2->num_frames_received.crypto, arg2->num_frames_received.new_token, arg2->num_frames_received.stream, arg2->num_frames_received.max_data, arg2->num_frames_received.max_stream_data, arg2->num_frames_received.max_streams_bidi, arg2->num_frames_received.max_streams_uni, arg2->num_frames_received.data_blocked, arg2->num_frames_received.stream_data_blocked, arg2->num_frames_received.streams_blocked, arg2->num_frames_received.new_connection_id, arg2->num_frames_received.retire_connection_id, arg2->num_frames_received.path_challenge, arg2->num_frames_received.path_response, arg2->num_frames_received.transport_close, arg2->num_frames_received.application_close, arg2->num_frames_received.handshake_done, arg2->num_frames_received.ack_frequency, arg2->num_ptos, arg2->cc.type->name, (unsigned long long)arg3);
}

#endif
