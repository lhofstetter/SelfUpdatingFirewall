
struct {
	__uint(type, BPF_MAP_TYPE_HASH);
	__type(key, __u32 src_ip);
	__type(value, struct sender);
	__uint(max_entries, 4096);
} senders SEC(".maps");

int xdp_firewall(struct xdp_md * packet) {
	

	return XDP_PASS;
}

char _license[] SEC("license") = "GPL";
