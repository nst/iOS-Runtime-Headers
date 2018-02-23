/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@interface NWStatisticsUDPSource : NWStatisticsSource {
    struct nstat_udp_descriptor { 
        unsigned long long upid; 
        unsigned long long eupid; 
        unsigned long long start_timestamp; 
        unsigned long long timestamp; 
        struct activity_bitmap { 
            unsigned long long start; 
            unsigned long long bitmap[2]; 
        } activity_bitmap; 
        union { 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } v4; 
            struct sockaddr_in6 { 
                unsigned char sin6_len; 
                unsigned char sin6_family; 
                unsigned short sin6_port; 
                unsigned int sin6_flowinfo; 
                struct in6_addr { 
                    union { 
                        unsigned char __u6_addr8[16]; 
                        unsigned short __u6_addr16[8]; 
                        unsigned int __u6_addr32[4]; 
                    } __u6_addr; 
                } sin6_addr; 
                unsigned int sin6_scope_id; 
            } v6; 
        } local; 
        union { 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } v4; 
            struct sockaddr_in6 { 
                unsigned char sin6_len; 
                unsigned char sin6_family; 
                unsigned short sin6_port; 
                unsigned int sin6_flowinfo; 
                struct in6_addr { 
                    union { 
                        unsigned char __u6_addr8[16]; 
                        unsigned short __u6_addr16[8]; 
                        unsigned int __u6_addr32[4]; 
                    } __u6_addr; 
                } sin6_addr; 
                unsigned int sin6_scope_id; 
            } v6; 
        } remote; 
        unsigned int ifindex; 
        unsigned int rcvbufsize; 
        unsigned int rcvbufused; 
        unsigned int traffic_class; 
        unsigned int pid; 
        BOOL pname[64]; 
        unsigned int epid; 
        unsigned char uuid[16]; 
        unsigned char euuid[16]; 
        unsigned char vuuid[16]; 
        unsigned short ifnet_properties; 
        unsigned char reserved[6]; 
    }  _descriptor;
}

- (id)_currentSnapshot;
- (id)description;
- (int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2;
- (id)initWithManager:(id)arg1 local:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2 remote:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg3;

@end
