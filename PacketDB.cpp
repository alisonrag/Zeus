#include "pch.hpp"
#include "PacketDB.hpp"

struct s_packet_db packet_db[MAX_PACKET + 1];

// initialize packet_db
void initializeDB() {

	// Packet: 0x0437
	packet_db[0x0437].len = 7;

	// Packet: 0x0438
	packet_db[0x0438].len = 10;

	// Packet: 0x035f
	packet_db[0x035f].len = 5;

	// Packet: 0x0360
	packet_db[0x0360].len = 6;

	// Packet: 0x0361
	packet_db[0x0361].len = 5;

	// Packet: 0x0362
	packet_db[0x0362].len = 6;

	// Packet: 0x0363
	packet_db[0x0363].len = 6;

	// Packet: 0x0364
	packet_db[0x0364].len = 8;

	// Packet: 0x0365
	packet_db[0x0365].len = 8;

	// Packet: 0x0366
	packet_db[0x0366].len = 10;

	// Packet: 0x0367
	packet_db[0x0367].len = 90;

	// Packet: 0x0368
	packet_db[0x0368].len = 6;

	// Packet: 0x0369
	packet_db[0x0369].len = 6;

	// Packet: 0x083c
	packet_db[0x083c].len = 14;

	// Packet: 0x0838
	packet_db[0x0838].len = 2;

	// Packet: 0x0835
	packet_db[0x0835].len = -1;

	// Packet: 0x0819
	packet_db[0x0819].len = -1;

	// Packet: 0x0817
	packet_db[0x0817].len = 6;

	// Packet: 0x0815
	packet_db[0x0815].len = 2;

	// Packet: 0x0811
	packet_db[0x0811].len = -1;

	// Packet: 0x0802
	packet_db[0x0802].len = 18;

	// Packet: 0x07ec
	packet_db[0x07ec].len = 8;

	// Packet: 0x07e4
	packet_db[0x07e4].len = -1;

	// Packet: 0x0436
	packet_db[0x0436].len = 19;

	// Packet: 0x02c4
	packet_db[0x02c4].len = 26;

	// Packet: 0x0281
	packet_db[0x0281].len = 4;

	// Packet: 0x0202
	packet_db[0x0202].len = 26;

	// Packet: 0x022d
	packet_db[0x022d].len = 5;

	// Packet: 0x023b
	packet_db[0x023b].len = 36;

	// Packet: 0x085a
	packet_db[0x085a].len = 2;

	// Packet: 0x085b
	packet_db[0x085b].len = 2;

	// Packet: 0x085c
	packet_db[0x085c].len = 2;

	// Packet: 0x085d
	packet_db[0x085d].len = 2;

	// Packet: 0x085e
	packet_db[0x085e].len = 2;

	// Packet: 0x085f
	packet_db[0x085f].len = 2;

	// Packet: 0x0860
	packet_db[0x0860].len = 2;

	// Packet: 0x0861
	packet_db[0x0861].len = 2;

	// Packet: 0x0862
	packet_db[0x0862].len = 2;

	// Packet: 0x0863
	packet_db[0x0863].len = 2;

	// Packet: 0x0864
	packet_db[0x0864].len = 2;

	// Packet: 0x0865
	packet_db[0x0865].len = 2;

	// Packet: 0x0866
	packet_db[0x0866].len = 2;

	// Packet: 0x0867
	packet_db[0x0867].len = 2;

	// Packet: 0x0868
	packet_db[0x0868].len = 2;

	// Packet: 0x0869
	packet_db[0x0869].len = 2;

	// Packet: 0x086a
	packet_db[0x086a].len = 2;

	// Packet: 0x086b
	packet_db[0x086b].len = 2;

	// Packet: 0x086c
	packet_db[0x086c].len = 2;

	// Packet: 0x086d
	packet_db[0x086d].len = 2;

	// Packet: 0x086e
	packet_db[0x086e].len = 2;

	// Packet: 0x086f
	packet_db[0x086f].len = 2;

	// Packet: 0x0870
	packet_db[0x0870].len = 2;

	// Packet: 0x0871
	packet_db[0x0871].len = 2;

	// Packet: 0x0872
	packet_db[0x0872].len = 2;

	// Packet: 0x0873
	packet_db[0x0873].len = 2;

	// Packet: 0x0874
	packet_db[0x0874].len = 2;

	// Packet: 0x0875
	packet_db[0x0875].len = 2;

	// Packet: 0x0876
	packet_db[0x0876].len = 2;

	// Packet: 0x0877
	packet_db[0x0877].len = 2;

	// Packet: 0x0878
	packet_db[0x0878].len = 2;

	// Packet: 0x0879
	packet_db[0x0879].len = 2;

	// Packet: 0x087a
	packet_db[0x087a].len = 2;

	// Packet: 0x087b
	packet_db[0x087b].len = 2;

	// Packet: 0x087c
	packet_db[0x087c].len = 2;

	// Packet: 0x087d
	packet_db[0x087d].len = 2;

	// Packet: 0x087e
	packet_db[0x087e].len = 2;

	// Packet: 0x087f
	packet_db[0x087f].len = 2;

	// Packet: 0x0880
	packet_db[0x0880].len = 2;

	// Packet: 0x0881
	packet_db[0x0881].len = 2;

	// Packet: 0x0882
	packet_db[0x0882].len = 2;

	// Packet: 0x0883
	packet_db[0x0883].len = 2;

	// Packet: 0x0917
	packet_db[0x0917].len = 2;

	// Packet: 0x0918
	packet_db[0x0918].len = 2;

	// Packet: 0x0919
	packet_db[0x0919].len = 2;

	// Packet: 0x091a
	packet_db[0x091a].len = 2;

	// Packet: 0x091b
	packet_db[0x091b].len = 2;

	// Packet: 0x091c
	packet_db[0x091c].len = 2;

	// Packet: 0x091d
	packet_db[0x091d].len = 2;

	// Packet: 0x091e
	packet_db[0x091e].len = 2;

	// Packet: 0x091f
	packet_db[0x091f].len = 2;

	// Packet: 0x0920
	packet_db[0x0920].len = 2;

	// Packet: 0x0921
	packet_db[0x0921].len = 2;

	// Packet: 0x0922
	packet_db[0x0922].len = 2;

	// Packet: 0x0923
	packet_db[0x0923].len = 2;

	// Packet: 0x0924
	packet_db[0x0924].len = 2;

	// Packet: 0x0925
	packet_db[0x0925].len = 2;

	// Packet: 0x0926
	packet_db[0x0926].len = 2;

	// Packet: 0x0927
	packet_db[0x0927].len = 2;

	// Packet: 0x0928
	packet_db[0x0928].len = 2;

	// Packet: 0x0929
	packet_db[0x0929].len = 2;

	// Packet: 0x092a
	packet_db[0x092a].len = 2;

	// Packet: 0x092b
	packet_db[0x092b].len = 2;

	// Packet: 0x092c
	packet_db[0x092c].len = 2;

	// Packet: 0x092d
	packet_db[0x092d].len = 2;

	// Packet: 0x092e
	packet_db[0x092e].len = 2;

	// Packet: 0x092f
	packet_db[0x092f].len = 2;

	// Packet: 0x0930
	packet_db[0x0930].len = 2;

	// Packet: 0x0931
	packet_db[0x0931].len = 2;

	// Packet: 0x0932
	packet_db[0x0932].len = 2;

	// Packet: 0x0933
	packet_db[0x0933].len = 2;

	// Packet: 0x0934
	packet_db[0x0934].len = 2;

	// Packet: 0x0935
	packet_db[0x0935].len = 2;

	// Packet: 0x0936
	packet_db[0x0936].len = 2;

	// Packet: 0x0937
	packet_db[0x0937].len = 2;

	// Packet: 0x0938
	packet_db[0x0938].len = 2;

	// Packet: 0x0939
	packet_db[0x0939].len = 2;

	// Packet: 0x093a
	packet_db[0x093a].len = 2;

	// Packet: 0x093b
	packet_db[0x093b].len = 2;

	// Packet: 0x093c
	packet_db[0x093c].len = 2;

	// Packet: 0x093d
	packet_db[0x093d].len = 2;

	// Packet: 0x093e
	packet_db[0x093e].len = 2;

	// Packet: 0x093f
	packet_db[0x093f].len = 2;

	// Packet: 0x0940
	packet_db[0x0940].len = 2;

	// Packet: 0x0884
	packet_db[0x0884].len = 2;

	// Packet: 0x0885
	packet_db[0x0885].len = 2;

	// Packet: 0x0886
	packet_db[0x0886].len = 2;

	// Packet: 0x0887
	packet_db[0x0887].len = 2;

	// Packet: 0x0888
	packet_db[0x0888].len = 2;

	// Packet: 0x0889
	packet_db[0x0889].len = 2;

	// Packet: 0x088a
	packet_db[0x088a].len = 2;

	// Packet: 0x088b
	packet_db[0x088b].len = 2;

	// Packet: 0x088c
	packet_db[0x088c].len = 2;

	// Packet: 0x088d
	packet_db[0x088d].len = 2;

	// Packet: 0x088e
	packet_db[0x088e].len = 2;

	// Packet: 0x088f
	packet_db[0x088f].len = 2;

	// Packet: 0x0890
	packet_db[0x0890].len = 2;

	// Packet: 0x0891
	packet_db[0x0891].len = 2;

	// Packet: 0x0892
	packet_db[0x0892].len = 2;

	// Packet: 0x0893
	packet_db[0x0893].len = 2;

	// Packet: 0x0894
	packet_db[0x0894].len = 2;

	// Packet: 0x0895
	packet_db[0x0895].len = 2;

	// Packet: 0x0896
	packet_db[0x0896].len = 2;

	// Packet: 0x0897
	packet_db[0x0897].len = 2;

	// Packet: 0x0898
	packet_db[0x0898].len = 2;

	// Packet: 0x0899
	packet_db[0x0899].len = 2;

	// Packet: 0x089a
	packet_db[0x089a].len = 2;

	// Packet: 0x089b
	packet_db[0x089b].len = 2;

	// Packet: 0x089c
	packet_db[0x089c].len = 2;

	// Packet: 0x089d
	packet_db[0x089d].len = 2;

	// Packet: 0x089e
	packet_db[0x089e].len = 2;

	// Packet: 0x089f
	packet_db[0x089f].len = 2;

	// Packet: 0x08a0
	packet_db[0x08a0].len = 2;

	// Packet: 0x08a1
	packet_db[0x08a1].len = 2;

	// Packet: 0x08a2
	packet_db[0x08a2].len = 2;

	// Packet: 0x08a3
	packet_db[0x08a3].len = 2;

	// Packet: 0x08a4
	packet_db[0x08a4].len = 2;

	// Packet: 0x08a5
	packet_db[0x08a5].len = 2;

	// Packet: 0x08a6
	packet_db[0x08a6].len = 2;

	// Packet: 0x08a7
	packet_db[0x08a7].len = 2;

	// Packet: 0x08a8
	packet_db[0x08a8].len = 2;

	// Packet: 0x08a9
	packet_db[0x08a9].len = 2;

	// Packet: 0x08aa
	packet_db[0x08aa].len = 2;

	// Packet: 0x08ab
	packet_db[0x08ab].len = 2;

	// Packet: 0x08ac
	packet_db[0x08ac].len = 2;

	// Packet: 0x08ad
	packet_db[0x08ad].len = 2;

	// Packet: 0x0941
	packet_db[0x0941].len = 2;

	// Packet: 0x0942
	packet_db[0x0942].len = 2;

	// Packet: 0x0943
	packet_db[0x0943].len = 2;

	// Packet: 0x0944
	packet_db[0x0944].len = 2;

	// Packet: 0x0945
	packet_db[0x0945].len = 2;

	// Packet: 0x0946
	packet_db[0x0946].len = 2;

	// Packet: 0x0947
	packet_db[0x0947].len = 2;

	// Packet: 0x0948
	packet_db[0x0948].len = 2;

	// Packet: 0x0949
	packet_db[0x0949].len = 2;

	// Packet: 0x094a
	packet_db[0x094a].len = 2;

	// Packet: 0x094b
	packet_db[0x094b].len = 2;

	// Packet: 0x094c
	packet_db[0x094c].len = 2;

	// Packet: 0x094d
	packet_db[0x094d].len = 2;

	// Packet: 0x094e
	packet_db[0x094e].len = 2;

	// Packet: 0x094f
	packet_db[0x094f].len = 2;

	// Packet: 0x0950
	packet_db[0x0950].len = 2;

	// Packet: 0x0951
	packet_db[0x0951].len = 2;

	// Packet: 0x0952
	packet_db[0x0952].len = 2;

	// Packet: 0x0953
	packet_db[0x0953].len = 2;

	// Packet: 0x0954
	packet_db[0x0954].len = 2;

	// Packet: 0x0955
	packet_db[0x0955].len = 2;

	// Packet: 0x0956
	packet_db[0x0956].len = 2;

	// Packet: 0x0957
	packet_db[0x0957].len = 2;

	// Packet: 0x0958
	packet_db[0x0958].len = 2;

	// Packet: 0x0959
	packet_db[0x0959].len = 2;

	// Packet: 0x095a
	packet_db[0x095a].len = 2;

	// Packet: 0x095b
	packet_db[0x095b].len = 2;

	// Packet: 0x095c
	packet_db[0x095c].len = 2;

	// Packet: 0x095d
	packet_db[0x095d].len = 2;

	// Packet: 0x095e
	packet_db[0x095e].len = 2;

	// Packet: 0x095f
	packet_db[0x095f].len = 2;

	// Packet: 0x0960
	packet_db[0x0960].len = 2;

	// Packet: 0x0961
	packet_db[0x0961].len = 2;

	// Packet: 0x0962
	packet_db[0x0962].len = 2;

	// Packet: 0x0963
	packet_db[0x0963].len = 2;

	// Packet: 0x0964
	packet_db[0x0964].len = 2;

	// Packet: 0x0965
	packet_db[0x0965].len = 2;

	// Packet: 0x0966
	packet_db[0x0966].len = 2;

	// Packet: 0x0967
	packet_db[0x0967].len = 2;

	// Packet: 0x0968
	packet_db[0x0968].len = 2;

	// Packet: 0x0969
	packet_db[0x0969].len = 2;

	// Packet: 0x096a
	packet_db[0x096a].len = 2;

	// Packet: 0x0187
	packet_db[0x0187].len = 6;

	// Packet: 0x0081
	packet_db[0x0081].len = 3;

	// Packet: 0x01c6
	packet_db[0x01c6].len = 4;

	// Packet: 0x01c7
	packet_db[0x01c7].len = 2;

	// Packet: 0x0064
	packet_db[0x0064].len = 55;

	// Packet: 0x0069
	packet_db[0x0069].len = -1;

	// Packet: 0x006a
	packet_db[0x006a].len = 23;

	// Packet: 0x01db
	packet_db[0x01db].len = 2;

	// Packet: 0x01dc
	packet_db[0x01dc].len = -1;

	// Packet: 0x01dd
	packet_db[0x01dd].len = 47;

	// Packet: 0x01fa
	packet_db[0x01fa].len = 48;

	// Packet: 0x0204
	packet_db[0x0204].len = 18;

	// Packet: 0x01f1
	packet_db[0x01f1].len = -1;

	// Packet: 0x0200
	packet_db[0x0200].len = 26;

	// Packet: 0x01be
	packet_db[0x01be].len = 2;

	// Packet: 0x01bf
	packet_db[0x01bf].len = 3;

	// Packet: 0x0065
	packet_db[0x0065].len = 17;

	// Packet: 0x0066
	packet_db[0x0066].len = 3;

	// Packet: 0x0067
	packet_db[0x0067].len = 37;

	// Packet: 0x0970
	packet_db[0x0970].len = 31;

	// Packet: 0x020d
	packet_db[0x020d].len = -1;

	// Packet: 0x006b
	packet_db[0x006b].len = -1;

	// Packet: 0x006c
	packet_db[0x006c].len = 3;

	// Packet: 0x006d
	packet_db[0x006d].len = 157;

	// Packet: 0x006e
	packet_db[0x006e].len = 3;

	// Packet: 0x0071
	packet_db[0x0071].len = 28;

	// Packet: 0x0068
	packet_db[0x0068].len = 46;

	// Packet: 0x01fb
	packet_db[0x01fb].len = 56;

	// Packet: 0x006f
	packet_db[0x006f].len = 2;

	// Packet: 0x0070
	packet_db[0x0070].len = 3;

	// Packet: 0x02ca
	packet_db[0x02ca].len = 3;

	// Packet: 0x0072
	packet_db[0x0072].len = 19;

	// Packet: 0x0082
	packet_db[0x0082].len = 2;

	// Packet: 0x0085
	packet_db[0x0085].len = 5;

	// Packet: 0x0089
	packet_db[0x0089].len = 7;

	// Packet: 0x008c
	packet_db[0x008c].len = -1;

	// Packet: 0x007e
	packet_db[0x007e].len = 6;

	// Packet: 0x007d
	packet_db[0x007d].len = 2;

	// Packet: 0x0090
	packet_db[0x0090].len = 7;

	// Packet: 0x0099
	packet_db[0x0099].len = -1;

	// Packet: 0x019c
	packet_db[0x019c].len = -1;

	// Packet: 0x009b
	packet_db[0x009b].len = 5;

	// Packet: 0x00cc
	packet_db[0x00cc].len = 6;

	// Packet: 0x00ce
	packet_db[0x00ce].len = 2;

	// Packet: 0x009f
	packet_db[0x009f].len = 6;

	// Packet: 0x00a2
	packet_db[0x00a2].len = 6;

	// Packet: 0x00a7
	packet_db[0x00a7].len = 8;

	// Packet: 0x00a9
	packet_db[0x00a9].len = 6;

	// Packet: 0x00ab
	packet_db[0x00ab].len = 4;

	// Packet: 0x00b8
	packet_db[0x00b8].len = 7;

	// Packet: 0x00b9
	packet_db[0x00b9].len = 6;

	// Packet: 0x00b2
	packet_db[0x00b2].len = 3;

	// Packet: 0x00ba
	packet_db[0x00ba].len = 2;

	// Packet: 0x00bb
	packet_db[0x00bb].len = 5;

	// Packet: 0x00bf
	packet_db[0x00bf].len = 3;

	// Packet: 0x00c1
	packet_db[0x00c1].len = 2;

	// Packet: 0x00c5
	packet_db[0x00c5].len = 7;

	// Packet: 0x00c8
	packet_db[0x00c8].len = -1;

	// Packet: 0x00c9
	packet_db[0x00c9].len = -1;

	// Packet: 0x0096
	packet_db[0x0096].len = -1;

	// Packet: 0x00cf
	packet_db[0x00cf].len = 27;

	// Packet: 0x00d0
	packet_db[0x00d0].len = 3;

	// Packet: 0x00d3
	packet_db[0x00d3].len = 2;

	// Packet: 0x00d5
	packet_db[0x00d5].len = -1;

	// Packet: 0x00d9
	packet_db[0x00d9].len = 14;

	// Packet: 0x00de
	packet_db[0x00de].len = -1;

	// Packet: 0x00e0
	packet_db[0x00e0].len = 30;

	// Packet: 0x00e2
	packet_db[0x00e2].len = 26;

	// Packet: 0x00e3
	packet_db[0x00e3].len = 2;

	// Packet: 0x00e4
	packet_db[0x00e4].len = 6;

	// Packet: 0x00e6
	packet_db[0x00e6].len = 3;

	// Packet: 0x00e8
	packet_db[0x00e8].len = 8;

	// Packet: 0x00eb
	packet_db[0x00eb].len = 2;

	// Packet: 0x00ed
	packet_db[0x00ed].len = 2;

	// Packet: 0x00ef
	packet_db[0x00ef].len = 2;

	// Packet: 0x00f3
	packet_db[0x00f3].len = 8;

	// Packet: 0x00f5
	packet_db[0x00f5].len = 8;

	// Packet: 0x00f7
	packet_db[0x00f7].len = 2;

	// Packet: 0x00f9
	packet_db[0x00f9].len = 26;

	// Packet: 0x01e8
	packet_db[0x01e8].len = 28;

	// Packet: 0x00fc
	packet_db[0x00fc].len = 6;

	// Packet: 0x00ff
	packet_db[0x00ff].len = 10;

	// Packet: 0x0102
	packet_db[0x0102].len = 6;

	// Packet: 0x0100
	packet_db[0x0100].len = 2;

	// Packet: 0x0103
	packet_db[0x0103].len = 30;

	// Packet: 0x0108
	packet_db[0x0108].len = -1;

	// Packet: 0x0112
	packet_db[0x0112].len = 4;

	// Packet: 0x0113
	packet_db[0x0113].len = 10;

	// Packet: 0x0116
	packet_db[0x0116].len = 10;

	// Packet: 0x0118
	packet_db[0x0118].len = 2;

	// Packet: 0x011b
	packet_db[0x011b].len = 20;

	// Packet: 0x011d
	packet_db[0x011d].len = 2;

	// Packet: 0x0126
	packet_db[0x0126].len = 8;

	// Packet: 0x0127
	packet_db[0x0127].len = 8;

	// Packet: 0x0128
	packet_db[0x0128].len = 8;

	// Packet: 0x0129
	packet_db[0x0129].len = 8;

	// Packet: 0x012a
	packet_db[0x012a].len = 2;

	// Packet: 0x012e
	packet_db[0x012e].len = 2;

	// Packet: 0x012f
	packet_db[0x012f].len = -1;

	// Packet: 0x01b2
	packet_db[0x01b2].len = -1;

	// Packet: 0x0134
	packet_db[0x0134].len = -1;

	// Packet: 0x0130
	packet_db[0x0130].len = 6;

	// Packet: 0x0138
	packet_db[0x0138].len = 3;

	// Packet: 0x013f
	packet_db[0x013f].len = 26;

	// Packet: 0x0140
	packet_db[0x0140].len = 22;

	// Packet: 0x0143
	packet_db[0x0143].len = 10;

	// Packet: 0x0146
	packet_db[0x0146].len = 6;

	// Packet: 0x0178
	packet_db[0x0178].len = 4;

	// Packet: 0x017a
	packet_db[0x017a].len = 4;

	// Packet: 0x017c
	packet_db[0x017c].len = 6;

	// Packet: 0x01fd
	packet_db[0x01fd].len = 25;

	// Packet: 0x018a
	packet_db[0x018a].len = 4;

	// Packet: 0x018e
	packet_db[0x018e].len = 18;

	// Packet: 0x0190
	packet_db[0x0190].len = 90;

	// Packet: 0x0197
	packet_db[0x0197].len = 4;

	// Packet: 0x0198
	packet_db[0x0198].len = 8;

	// Packet: 0x01ae
	packet_db[0x01ae].len = 6;

	// Packet: 0x025b
	packet_db[0x025b].len = 8;

	// Packet: 0x01af
	packet_db[0x01af].len = 4;

	// Packet: 0x01b9
	packet_db[0x01b9].len = 6;

	// Packet: 0x01cd
	packet_db[0x01cd].len = 30;

	// Packet: 0x01ce
	packet_db[0x01ce].len = 6;

	// Packet: 0x0443
	packet_db[0x0443].len = 8;

	// Packet: 0x01cf
	packet_db[0x01cf].len = 28;

	// Packet: 0x01d0
	packet_db[0x01d0].len = 8;

	// Packet: 0x01e1
	packet_db[0x01e1].len = 8;

	// Packet: 0x01d1
	packet_db[0x01d1].len = 14;

	// Packet: 0x01d2
	packet_db[0x01d2].len = 10;

	// Packet: 0x0094
	packet_db[0x0094].len = 6;

	// Packet: 0x0095
	packet_db[0x0095].len = 30;

	// Packet: 0x0195
	packet_db[0x0195].len = 102;

	// Packet: 0x0193
	packet_db[0x0193].len = 6;

	// Packet: 0x0175
	packet_db[0x0175].len = 6;

	// Packet: 0x0176
	packet_db[0x0176].len = 106;

	// Packet: 0x0079
	packet_db[0x0079].len = 53;

	// Packet: 0x019d
	packet_db[0x019d].len = 6;

	// Packet: 0x014c
	packet_db[0x014c].len = -1;

	// Packet: 0x014d
	packet_db[0x014d].len = 2;

	// Packet: 0x014e
	packet_db[0x014e].len = 6;

	// Packet: 0x014f
	packet_db[0x014f].len = 6;

	// Packet: 0x0150
	packet_db[0x0150].len = 110;

	// Packet: 0x01b6
	packet_db[0x01b6].len = 114;

	// Packet: 0x0151
	packet_db[0x0151].len = 6;

	// Packet: 0x0152
	packet_db[0x0152].len = -1;

	// Packet: 0x0153
	packet_db[0x0153].len = -1;

	// Packet: 0x0154
	packet_db[0x0154].len = -1;

	// Packet: 0x0166
	packet_db[0x0166].len = -1;

	// Packet: 0x0155
	packet_db[0x0155].len = -1;

	// Packet: 0x0156
	packet_db[0x0156].len = -1;

	// Packet: 0x0157
	packet_db[0x0157].len = 6;

	// Packet: 0x0159
	packet_db[0x0159].len = 54;

	// Packet: 0x015a
	packet_db[0x015a].len = 66;

	// Packet: 0x015b
	packet_db[0x015b].len = 54;

	// Packet: 0x015c
	packet_db[0x015c].len = 90;

	// Packet: 0x015d
	packet_db[0x015d].len = 42;

	// Packet: 0x015e
	packet_db[0x015e].len = 6;

	// Packet: 0x015f
	packet_db[0x015f].len = 42;

	// Packet: 0x0160
	packet_db[0x0160].len = -1;

	// Packet: 0x0161
	packet_db[0x0161].len = -1;

	// Packet: 0x0162
	packet_db[0x0162].len = -1;

	// Packet: 0x0163
	packet_db[0x0163].len = -1;

	// Packet: 0x0164
	packet_db[0x0164].len = -1;

	// Packet: 0x0165
	packet_db[0x0165].len = 30;

	// Packet: 0x0167
	packet_db[0x0167].len = 3;

	// Packet: 0x0168
	packet_db[0x0168].len = 14;

	// Packet: 0x0169
	packet_db[0x0169].len = 3;

	// Packet: 0x016a
	packet_db[0x016a].len = 30;

	// Packet: 0x016b
	packet_db[0x016b].len = 10;

	// Packet: 0x0149
	packet_db[0x0149].len = 9;

	// Packet: 0x014a
	packet_db[0x014a].len = 6;

	// Packet: 0x014b
	packet_db[0x014b].len = 27;

	// Packet: 0x016e
	packet_db[0x016e].len = 186;

	// Packet: 0x016f
	packet_db[0x016f].len = 182;

	// Packet: 0x017e
	packet_db[0x017e].len = -1;

	// Packet: 0x017f
	packet_db[0x017f].len = -1;

	// Packet: 0x016c
	packet_db[0x016c].len = 43;

	// Packet: 0x016d
	packet_db[0x016d].len = 14;

	// Packet: 0x01f2
	packet_db[0x01f2].len = 20;

	// Packet: 0x0170
	packet_db[0x0170].len = 14;

	// Packet: 0x0171
	packet_db[0x0171].len = 30;

	// Packet: 0x0172
	packet_db[0x0172].len = 10;

	// Packet: 0x0173
	packet_db[0x0173].len = 3;

	// Packet: 0x0174
	packet_db[0x0174].len = -1;

	// Packet: 0x0180
	packet_db[0x0180].len = 6;

	// Packet: 0x0181
	packet_db[0x0181].len = 3;

	// Packet: 0x0182
	packet_db[0x0182].len = 106;

	// Packet: 0x0183
	packet_db[0x0183].len = 10;

	// Packet: 0x0184
	packet_db[0x0184].len = 10;

	// Packet: 0x0185
	packet_db[0x0185].len = 34;

	// Packet: 0x019e
	packet_db[0x019e].len = 2;

	// Packet: 0x019f
	packet_db[0x019f].len = 6;

	// Packet: 0x01a0
	packet_db[0x01a0].len = 3;

	// Packet: 0x01a1
	packet_db[0x01a1].len = 3;

	// Packet: 0x01a2
	packet_db[0x01a2].len = 37;

	// Packet: 0x01a3
	packet_db[0x01a3].len = 7;

	// Packet: 0x01a4
	packet_db[0x01a4].len = 11;

	// Packet: 0x01a5
	packet_db[0x01a5].len = 26;

	// Packet: 0x01a6
	packet_db[0x01a6].len = -1;

	// Packet: 0x01a7
	packet_db[0x01a7].len = 4;

	// Packet: 0x01a8
	packet_db[0x01a8].len = 4;

	// Packet: 0x01a9
	packet_db[0x01a9].len = 6;

	// Packet: 0x01aa
	packet_db[0x01aa].len = 10;

	// Packet: 0x01ca
	packet_db[0x01ca].len = 3;

	// Packet: 0x01b0
	packet_db[0x01b0].len = 11;

	// Packet: 0x01b1
	packet_db[0x01b1].len = 7;

	// Packet: 0x01ba
	packet_db[0x01ba].len = 26;

	// Packet: 0x01bb
	packet_db[0x01bb].len = 26;

	// Packet: 0x01bc
	packet_db[0x01bc].len = 26;

	// Packet: 0x01bd
	packet_db[0x01bd].len = 26;

	// Packet: 0x01c0
	packet_db[0x01c0].len = 2;

	// Packet: 0x01c1
	packet_db[0x01c1].len = 14;

	// Packet: 0x01c2
	packet_db[0x01c2].len = 10;

	// Packet: 0x01d3
	packet_db[0x01d3].len = 35;

	// Packet: 0x01d5
	packet_db[0x01d5].len = -1;

	// Packet: 0x01d4
	packet_db[0x01d4].len = 6;

	// Packet: 0x01df
	packet_db[0x01df].len = 6;

	// Packet: 0x01f3
	packet_db[0x01f3].len = 10;

	// Packet: 0x0284
	packet_db[0x0284].len = 14;

	// Packet: 0x01ff
	packet_db[0x01ff].len = 10;

	// Packet: 0x01ed
	packet_db[0x01ed].len = 2;

	// Packet: 0x01e7
	packet_db[0x01e7].len = 2;

	// Packet: 0x01b7
	packet_db[0x01b7].len = 6;

	// Packet: 0x01f7
	packet_db[0x01f7].len = 14;

	// Packet: 0x01e3
	packet_db[0x01e3].len = 14;

	// Packet: 0x01cb
	packet_db[0x01cb].len = 9;

	// Packet: 0x01f9
	packet_db[0x01f9].len = 6;

	// Packet: 0x01e5
	packet_db[0x01e5].len = 6;

	// Packet: 0x0201
	packet_db[0x0201].len = -1;

	// Packet: 0x0203
	packet_db[0x0203].len = 10;

	// Packet: 0x0205
	packet_db[0x0205].len = 26;

	// Packet: 0x0206
	packet_db[0x0206].len = 11;

	// Packet: 0x0207
	packet_db[0x0207].len = 34;

	// Packet: 0x0208
	packet_db[0x0208].len = 14;

	// Packet: 0x0209
	packet_db[0x0209].len = 36;

	// Packet: 0x020a
	packet_db[0x020a].len = 10;

	// Packet: 0x020e
	packet_db[0x020e].len = 32;

	// Packet: 0x020f
	packet_db[0x020f].len = 10;

	// Packet: 0x0210
	packet_db[0x0210].len = 22;

	// Packet: 0x0212
	packet_db[0x0212].len = 26;

	// Packet: 0x0213
	packet_db[0x0213].len = 26;

	// Packet: 0x0214
	packet_db[0x0214].len = 42;

	// Packet: 0x0215
	packet_db[0x0215].len = 6;

	// Packet: 0x0216
	packet_db[0x0216].len = 6;

	// Packet: 0x0217
	packet_db[0x0217].len = 2;

	// Packet: 0x0218
	packet_db[0x0218].len = 2;

	// Packet: 0x0225
	packet_db[0x0225].len = 2;

	// Packet: 0x0219
	packet_db[0x0219].len = 282;

	// Packet: 0x021a
	packet_db[0x021a].len = 282;

	// Packet: 0x0226
	packet_db[0x0226].len = 282;

	// Packet: 0x0282
	packet_db[0x0282].len = 284;

	// Packet: 0x021b
	packet_db[0x021b].len = 10;

	// Packet: 0x021c
	packet_db[0x021c].len = 10;

	// Packet: 0x0224
	packet_db[0x0224].len = 10;

	// Packet: 0x0280
	packet_db[0x0280].len = 12;

	// Packet: 0x0285
	packet_db[0x0285].len = 6;

	// Packet: 0x0286
	packet_db[0x0286].len = 4;

	// Packet: 0x021d
	packet_db[0x021d].len = 6;

	// Packet: 0x021e
	packet_db[0x021e].len = 6;

	// Packet: 0x021f
	packet_db[0x021f].len = 66;

	// Packet: 0x0222
	packet_db[0x0222].len = 6;

	// Packet: 0x0221
	packet_db[0x0221].len = -1;

	// Packet: 0x0220
	packet_db[0x0220].len = 10;

	// Packet: 0x0223
	packet_db[0x0223].len = 10;

	// Packet: 0x0073
	packet_db[0x0073].len = 11;

	// Packet: 0x0074
	packet_db[0x0074].len = 3;

	// Packet: 0x0075
	packet_db[0x0075].len = -1;

	// Packet: 0x0076
	packet_db[0x0076].len = 9;

	// Packet: 0x0077
	packet_db[0x0077].len = 5;

	// Packet: 0x0078
	packet_db[0x0078].len = 55;

	// Packet: 0x007a
	packet_db[0x007a].len = 58;

	// Packet: 0x007b
	packet_db[0x007b].len = 60;

	// Packet: 0x007c
	packet_db[0x007c].len = 44;

	// Packet: 0x007f
	packet_db[0x007f].len = 6;

	// Packet: 0x0080
	packet_db[0x0080].len = 7;

	// Packet: 0x0083
	packet_db[0x0083].len = 2;

	// Packet: 0x0084
	packet_db[0x0084].len = 2;

	// Packet: 0x0086
	packet_db[0x0086].len = 16;

	// Packet: 0x0087
	packet_db[0x0087].len = 12;

	// Packet: 0x0088
	packet_db[0x0088].len = 10;

	// Packet: 0x08cd
	packet_db[0x08cd].len = 10;

	// Packet: 0x008a
	packet_db[0x008a].len = 29;

	// Packet: 0x008b
	packet_db[0x008b].len = 23;

	// Packet: 0x008d
	packet_db[0x008d].len = -1;

	// Packet: 0x008e
	packet_db[0x008e].len = -1;

	// Packet: 0x0091
	packet_db[0x0091].len = 22;

	// Packet: 0x0092
	packet_db[0x0092].len = 28;

	// Packet: 0x0093
	packet_db[0x0093].len = 2;

	// Packet: 0x0097
	packet_db[0x0097].len = -1;

	// Packet: 0x0098
	packet_db[0x0098].len = 3;

	// Packet: 0x009a
	packet_db[0x009a].len = -1;

	// Packet: 0x009c
	packet_db[0x009c].len = 9;

	// Packet: 0x009d
	packet_db[0x009d].len = 19;

	// Packet: 0x009e
	packet_db[0x009e].len = 19;

	// Packet: 0x00a0
	packet_db[0x00a0].len = 33;

	// Packet: 0x00a1
	packet_db[0x00a1].len = 6;

	// Packet: 0x00a3
	packet_db[0x00a3].len = -1;

	// Packet: 0x00a4
	packet_db[0x00a4].len = -1;

	// Packet: 0x00a5
	packet_db[0x00a5].len = -1;

	// Packet: 0x00a6
	packet_db[0x00a6].len = -1;

	// Packet: 0x00a8
	packet_db[0x00a8].len = 7;

	// Packet: 0x00aa
	packet_db[0x00aa].len = 9;

	// Packet: 0x00ac
	packet_db[0x00ac].len = 7;

	// Packet: 0x00ae
	packet_db[0x00ae].len = -1;

	// Packet: 0x00af
	packet_db[0x00af].len = 6;

	// Packet: 0x00b0
	packet_db[0x00b0].len = 8;

	// Packet: 0x00b1
	packet_db[0x00b1].len = 8;

	// Packet: 0x00b3
	packet_db[0x00b3].len = 3;

	// Packet: 0x00b4
	packet_db[0x00b4].len = -1;

	// Packet: 0x00b5
	packet_db[0x00b5].len = 6;

	// Packet: 0x00b6
	packet_db[0x00b6].len = 6;

	// Packet: 0x00b7
	packet_db[0x00b7].len = -1;

	// Packet: 0x00bc
	packet_db[0x00bc].len = 6;

	// Packet: 0x00bd
	packet_db[0x00bd].len = 44;

	// Packet: 0x00be
	packet_db[0x00be].len = 5;

	// Packet: 0x00c0
	packet_db[0x00c0].len = 7;

	// Packet: 0x00c2
	packet_db[0x00c2].len = 6;

	// Packet: 0x00c3
	packet_db[0x00c3].len = 8;

	// Packet: 0x00c4
	packet_db[0x00c4].len = 6;

	// Packet: 0x00c6
	packet_db[0x00c6].len = -1;

	// Packet: 0x00c7
	packet_db[0x00c7].len = -1;

	// Packet: 0x00ca
	packet_db[0x00ca].len = 3;

	// Packet: 0x00cb
	packet_db[0x00cb].len = 3;

	// Packet: 0x00cd
	packet_db[0x00cd].len = 3;

	// Packet: 0x00d1
	packet_db[0x00d1].len = 4;

	// Packet: 0x00d2
	packet_db[0x00d2].len = 4;

	// Packet: 0x00d4
	packet_db[0x00d4].len = -1;

	// Packet: 0x00d6
	packet_db[0x00d6].len = 3;

	// Packet: 0x00d7
	packet_db[0x00d7].len = -1;

	// Packet: 0x00d8
	packet_db[0x00d8].len = 6;

	// Packet: 0x00da
	packet_db[0x00da].len = 3;

	// Packet: 0x00db
	packet_db[0x00db].len = -1;

	// Packet: 0x00dc
	packet_db[0x00dc].len = 28;

	// Packet: 0x00dd
	packet_db[0x00dd].len = 29;

	// Packet: 0x00df
	packet_db[0x00df].len = -1;

	// Packet: 0x00e1
	packet_db[0x00e1].len = 30;

	// Packet: 0x00e5
	packet_db[0x00e5].len = 26;

	// Packet: 0x00e7
	packet_db[0x00e7].len = 3;

	// Packet: 0x00e9
	packet_db[0x00e9].len = 29;

	// Packet: 0x00ea
	packet_db[0x00ea].len = 5;

	// Packet: 0x00ec
	packet_db[0x00ec].len = 3;

	// Packet: 0x00ee
	packet_db[0x00ee].len = 2;

	// Packet: 0x00f0
	packet_db[0x00f0].len = 3;

	// Packet: 0x00f1
	packet_db[0x00f1].len = 2;

	// Packet: 0x00f2
	packet_db[0x00f2].len = 6;

	// Packet: 0x00f4
	packet_db[0x00f4].len = 31;

	// Packet: 0x00f6
	packet_db[0x00f6].len = 8;

	// Packet: 0x00f8
	packet_db[0x00f8].len = 2;

	// Packet: 0x00fa
	packet_db[0x00fa].len = 3;

	// Packet: 0x00fb
	packet_db[0x00fb].len = -1;

	// Packet: 0x00fd
	packet_db[0x00fd].len = 27;

	// Packet: 0x00fe
	packet_db[0x00fe].len = 30;

	// Packet: 0x0101
	packet_db[0x0101].len = 6;

	// Packet: 0x0104
	packet_db[0x0104].len = 79;

	// Packet: 0x0105
	packet_db[0x0105].len = 31;

	// Packet: 0x0106
	packet_db[0x0106].len = 10;

	// Packet: 0x0107
	packet_db[0x0107].len = 10;

	// Packet: 0x0109
	packet_db[0x0109].len = -1;

	// Packet: 0x010a
	packet_db[0x010a].len = 6;

	// Packet: 0x010b
	packet_db[0x010b].len = 6;

	// Packet: 0x010c
	packet_db[0x010c].len = 6;

	// Packet: 0x010d
	packet_db[0x010d].len = 2;

	// Packet: 0x010e
	packet_db[0x010e].len = 11;

	// Packet: 0x010f
	packet_db[0x010f].len = -1;

	// Packet: 0x02b1
	packet_db[0x02b1].len = -1;

	// Packet: 0x02b2
	packet_db[0x02b2].len = -1;

	// Packet: 0x02b5
	packet_db[0x02b5].len = -1;

	// Packet: 0x0110
	packet_db[0x0110].len = 14;

	// Packet: 0x0111
	packet_db[0x0111].len = 39;

	// Packet: 0x0114
	packet_db[0x0114].len = 31;

	// Packet: 0x0115
	packet_db[0x0115].len = 35;

	// Packet: 0x0117
	packet_db[0x0117].len = 18;

	// Packet: 0x0119
	packet_db[0x0119].len = 13;

	// Packet: 0x0229
	packet_db[0x0229].len = 15;

	// Packet: 0x011a
	packet_db[0x011a].len = 15;

	// Packet: 0x011c
	packet_db[0x011c].len = 68;

	// Packet: 0x011e
	packet_db[0x011e].len = 3;

	// Packet: 0x011f
	packet_db[0x011f].len = 16;

	// Packet: 0x0120
	packet_db[0x0120].len = 6;

	// Packet: 0x0121
	packet_db[0x0121].len = 14;

	// Packet: 0x0122
	packet_db[0x0122].len = -1;

	// Packet: 0x0123
	packet_db[0x0123].len = -1;

	// Packet: 0x0124
	packet_db[0x0124].len = 31;

	// Packet: 0x0125
	packet_db[0x0125].len = 8;

	// Packet: 0x012b
	packet_db[0x012b].len = 2;

	// Packet: 0x012c
	packet_db[0x012c].len = 3;

	// Packet: 0x012d
	packet_db[0x012d].len = 4;

	// Packet: 0x0131
	packet_db[0x0131].len = 86;

	// Packet: 0x0132
	packet_db[0x0132].len = 6;

	// Packet: 0x0133
	packet_db[0x0133].len = -1;

	// Packet: 0x0135
	packet_db[0x0135].len = 7;

	// Packet: 0x0136
	packet_db[0x0136].len = -1;

	// Packet: 0x0137
	packet_db[0x0137].len = 6;

	// Packet: 0x0139
	packet_db[0x0139].len = 16;

	// Packet: 0x013a
	packet_db[0x013a].len = 4;

	// Packet: 0x013b
	packet_db[0x013b].len = 4;

	// Packet: 0x013c
	packet_db[0x013c].len = 4;

	// Packet: 0x013d
	packet_db[0x013d].len = 6;

	// Packet: 0x013e
	packet_db[0x013e].len = 24;

	// Packet: 0x0141
	packet_db[0x0141].len = 14;

	// Packet: 0x0142
	packet_db[0x0142].len = 6;

	// Packet: 0x0144
	packet_db[0x0144].len = 23;

	// Packet: 0x0145
	packet_db[0x0145].len = 19;

	// Packet: 0x0147
	packet_db[0x0147].len = 39;

	// Packet: 0x0148
	packet_db[0x0148].len = 8;

	// Packet: 0x0177
	packet_db[0x0177].len = -1;

	// Packet: 0x0179
	packet_db[0x0179].len = 5;

	// Packet: 0x017b
	packet_db[0x017b].len = -1;

	// Packet: 0x017d
	packet_db[0x017d].len = 7;

	// Packet: 0x0188
	packet_db[0x0188].len = 8;

	// Packet: 0x0189
	packet_db[0x0189].len = 4;

	// Packet: 0x018b
	packet_db[0x018b].len = 4;

	// Packet: 0x018c
	packet_db[0x018c].len = 29;

	// Packet: 0x018d
	packet_db[0x018d].len = -1;

	// Packet: 0x018f
	packet_db[0x018f].len = 8;

	// Packet: 0x0191
	packet_db[0x0191].len = 86;

	// Packet: 0x0192
	packet_db[0x0192].len = 24;

	// Packet: 0x0194
	packet_db[0x0194].len = 30;

	// Packet: 0x0196
	packet_db[0x0196].len = 9;

	// Packet: 0x028a
	packet_db[0x028a].len = 18;

	// Packet: 0x0199
	packet_db[0x0199].len = 4;

	// Packet: 0x019a
	packet_db[0x019a].len = 14;

	// Packet: 0x019b
	packet_db[0x019b].len = 10;

	// Packet: 0x01ab
	packet_db[0x01ab].len = 12;

	// Packet: 0x01ac
	packet_db[0x01ac].len = 6;

	// Packet: 0x01ad
	packet_db[0x01ad].len = -1;

	// Packet: 0x025a
	packet_db[0x025a].len = -1;

	// Packet: 0x01b3
	packet_db[0x01b3].len = 67;

	// Packet: 0x01b4
	packet_db[0x01b4].len = 12;

	// Packet: 0x01b5
	packet_db[0x01b5].len = 18;

	// Packet: 0x01b8
	packet_db[0x01b8].len = 3;

	// Packet: 0x01c3
	packet_db[0x01c3].len = -1;

	// Packet: 0x01c4
	packet_db[0x01c4].len = 32;

	// Packet: 0x01c5
	packet_db[0x01c5].len = 32;

	// Packet: 0x01c8
	packet_db[0x01c8].len = 15;

	// Packet: 0x01c9
	packet_db[0x01c9].len = 97;

	// Packet: 0x01cc
	packet_db[0x01cc].len = 9;

	// Packet: 0x01d6
	packet_db[0x01d6].len = 4;

	// Packet: 0x01d7
	packet_db[0x01d7].len = 15;

	// Packet: 0x01d8
	packet_db[0x01d8].len = 58;

	// Packet: 0x022a
	packet_db[0x022a].len = 62;

	// Packet: 0x01d9
	packet_db[0x01d9].len = 57;

	// Packet: 0x022b
	packet_db[0x022b].len = 61;

	// Packet: 0x01da
	packet_db[0x01da].len = 64;

	// Packet: 0x022c
	packet_db[0x022c].len = 69;

	// Packet: 0x01de
	packet_db[0x01de].len = 33;

	// Packet: 0x01e0
	packet_db[0x01e0].len = 30;

	// Packet: 0x01e2
	packet_db[0x01e2].len = 34;

	// Packet: 0x01e4
	packet_db[0x01e4].len = 2;

	// Packet: 0x01e6
	packet_db[0x01e6].len = 26;

	// Packet: 0x01e9
	packet_db[0x01e9].len = 81;

	// Packet: 0x01ea
	packet_db[0x01ea].len = 6;

	// Packet: 0x01eb
	packet_db[0x01eb].len = 10;

	// Packet: 0x01ec
	packet_db[0x01ec].len = 26;

	// Packet: 0x01ee
	packet_db[0x01ee].len = -1;

	// Packet: 0x01ef
	packet_db[0x01ef].len = -1;

	// Packet: 0x01f0
	packet_db[0x01f0].len = -1;

	// Packet: 0x01f4
	packet_db[0x01f4].len = 32;

	// Packet: 0x01f5
	packet_db[0x01f5].len = 9;

	// Packet: 0x01f6
	packet_db[0x01f6].len = 34;

	// Packet: 0x0253
	packet_db[0x0253].len = 3;

	// Packet: 0x0254
	packet_db[0x0254].len = 3;

	// Packet: 0x01f8
	packet_db[0x01f8].len = 2;

	// Packet: 0x01fc
	packet_db[0x01fc].len = -1;

	// Packet: 0x01fe
	packet_db[0x01fe].len = 5;

	// Packet: 0x0227
	packet_db[0x0227].len = 18;

	// Packet: 0x0228
	packet_db[0x0228].len = 18;

	// Packet: 0x0232
	packet_db[0x0232].len = 9;

	// Packet: 0x0233
	packet_db[0x0233].len = 11;

	// Packet: 0x0234
	packet_db[0x0234].len = 6;

	// Packet: 0x0230
	packet_db[0x0230].len = 12;

	// Packet: 0x022e
	packet_db[0x022e].len = 73;

	// Packet: 0x027d
	packet_db[0x027d].len = 62;

	// Packet: 0x0235
	packet_db[0x0235].len = -1;

	// Packet: 0x0239
	packet_db[0x0239].len = 11;

	// Packet: 0x022f
	packet_db[0x022f].len = 7;

	// Packet: 0x0231
	packet_db[0x0231].len = 26;

	// Packet: 0x0237
	packet_db[0x0237].len = 2;

	// Packet: 0x0238
	packet_db[0x0238].len = 282;

	// Packet: 0x0236
	packet_db[0x0236].len = 10;

	// Packet: 0x023a
	packet_db[0x023a].len = 4;

	// Packet: 0x023c
	packet_db[0x023c].len = 6;

	// Packet: 0x023d
	packet_db[0x023d].len = 6;

	// Packet: 0x023e
	packet_db[0x023e].len = 8;

	// Packet: 0x023f
	packet_db[0x023f].len = 2;

	// Packet: 0x0240
	packet_db[0x0240].len = -1;

	// Packet: 0x0241
	packet_db[0x0241].len = 6;

	// Packet: 0x0242
	packet_db[0x0242].len = -1;

	// Packet: 0x0243
	packet_db[0x0243].len = 6;

	// Packet: 0x0257
	packet_db[0x0257].len = 8;

	// Packet: 0x0244
	packet_db[0x0244].len = 6;

	// Packet: 0x0245
	packet_db[0x0245].len = 3;

	// Packet: 0x0246
	packet_db[0x0246].len = 4;

	// Packet: 0x0247
	packet_db[0x0247].len = 8;

	// Packet: 0x0248
	packet_db[0x0248].len = -1;

	// Packet: 0x0249
	packet_db[0x0249].len = 3;

	// Packet: 0x024a
	packet_db[0x024a].len = 70;

	// Packet: 0x024b
	packet_db[0x024b].len = 4;

	// Packet: 0x024c
	packet_db[0x024c].len = 8;

	// Packet: 0x024d
	packet_db[0x024d].len = 12;

	// Packet: 0x024e
	packet_db[0x024e].len = 6;

	// Packet: 0x024f
	packet_db[0x024f].len = 10;

	// Packet: 0x0250
	packet_db[0x0250].len = 3;

	// Packet: 0x0251
	packet_db[0x0251].len = 34;

	// Packet: 0x0252
	packet_db[0x0252].len = -1;

	// Packet: 0x0255
	packet_db[0x0255].len = 5;

	// Packet: 0x0256
	packet_db[0x0256].len = 5;

	// Packet: 0x0258
	packet_db[0x0258].len = 2;

	// Packet: 0x0259
	packet_db[0x0259].len = 3;

	// Packet: 0x025c
	packet_db[0x025c].len = 4;

	// Packet: 0x025d
	packet_db[0x025d].len = 6;

	// Packet: 0x025e
	packet_db[0x025e].len = 4;

	// Packet: 0x025f
	packet_db[0x025f].len = 6;

	// Packet: 0x0260
	packet_db[0x0260].len = 6;

	// Packet: 0x0261
	packet_db[0x0261].len = 11;

	// Packet: 0x0262
	packet_db[0x0262].len = 11;

	// Packet: 0x0263
	packet_db[0x0263].len = 11;

	// Packet: 0x0264
	packet_db[0x0264].len = 20;

	// Packet: 0x0265
	packet_db[0x0265].len = 20;

	// Packet: 0x0266
	packet_db[0x0266].len = 30;

	// Packet: 0x0267
	packet_db[0x0267].len = 4;

	// Packet: 0x0268
	packet_db[0x0268].len = 4;

	// Packet: 0x0269
	packet_db[0x0269].len = 4;

	// Packet: 0x026a
	packet_db[0x026a].len = 4;

	// Packet: 0x026b
	packet_db[0x026b].len = 4;

	// Packet: 0x026c
	packet_db[0x026c].len = 4;

	// Packet: 0x026d
	packet_db[0x026d].len = 4;

	// Packet: 0x026f
	packet_db[0x026f].len = 2;

	// Packet: 0x0270
	packet_db[0x0270].len = 2;

	// Packet: 0x0271
	packet_db[0x0271].len = 40;

	// Packet: 0x0272
	packet_db[0x0272].len = 44;

	// Packet: 0x0273
	packet_db[0x0273].len = 30;

	// Packet: 0x0274
	packet_db[0x0274].len = 8;

	// Packet: 0x0275
	packet_db[0x0275].len = 37;

	// Packet: 0x0276
	packet_db[0x0276].len = -1;

	// Packet: 0x0277
	packet_db[0x0277].len = 84;

	// Packet: 0x0278
	packet_db[0x0278].len = 2;

	// Packet: 0x0279
	packet_db[0x0279].len = 2;

	// Packet: 0x027a
	packet_db[0x027a].len = -1;

	// Packet: 0x027b
	packet_db[0x027b].len = 14;

	// Packet: 0x027c
	packet_db[0x027c].len = 60;

	// Packet: 0x027e
	packet_db[0x027e].len = -1;

	// Packet: 0x027f
	packet_db[0x027f].len = 8;

	// Packet: 0x0283
	packet_db[0x0283].len = 6;

	// Packet: 0x0287
	packet_db[0x0287].len = -1;

	// Packet: 0x0288
	packet_db[0x0288].len = 8;

	// Packet: 0x0289
	packet_db[0x0289].len = 8;

	// Packet: 0x0444
	packet_db[0x0444].len = -1;

	// Packet: 0x0445
	packet_db[0x0445].len = 8;

	// Packet: 0x028b
	packet_db[0x028b].len = -1;

	// Packet: 0x028c
	packet_db[0x028c].len = 46;

	// Packet: 0x028d
	packet_db[0x028d].len = 34;

	// Packet: 0x028e
	packet_db[0x028e].len = 4;

	// Packet: 0x028f
	packet_db[0x028f].len = 6;

	// Packet: 0x0290
	packet_db[0x0290].len = 4;

	// Packet: 0x0291
	packet_db[0x0291].len = 4;

	// Packet: 0x0292
	packet_db[0x0292].len = 2;

	// Packet: 0x0293
	packet_db[0x0293].len = 70;

	// Packet: 0x0294
	packet_db[0x0294].len = 10;

	// Packet: 0x0295
	packet_db[0x0295].len = -1;

	// Packet: 0x0296
	packet_db[0x0296].len = -1;

	// Packet: 0x0297
	packet_db[0x0297].len = -1;

	// Packet: 0x0298
	packet_db[0x0298].len = 10;

	// Packet: 0x0299
	packet_db[0x0299].len = 8;

	// Packet: 0x029a
	packet_db[0x029a].len = 37;

	// Packet: 0x029b
	packet_db[0x029b].len = 80;

	// Packet: 0x029c
	packet_db[0x029c].len = 66;

	// Packet: 0x029d
	packet_db[0x029d].len = -1;

	// Packet: 0x029e
	packet_db[0x029e].len = 11;

	// Packet: 0x029f
	packet_db[0x029f].len = 3;

	// Packet: 0x02a2
	packet_db[0x02a2].len = 8;

	// Packet: 0x02a5
	packet_db[0x02a5].len = 8;

	// Packet: 0x02a6
	packet_db[0x02a6].len = -1;

	// Packet: 0x02a7
	packet_db[0x02a7].len = -1;

	// Packet: 0x02aa
	packet_db[0x02aa].len = 4;

	// Packet: 0x02ab
	packet_db[0x02ab].len = 36;

	// Packet: 0x02ac
	packet_db[0x02ac].len = 6;

	// Packet: 0x02ad
	packet_db[0x02ad].len = 8;

	// Packet: 0x02b0
	packet_db[0x02b0].len = 85;

	// Packet: 0x02b8
	packet_db[0x02b8].len = 32;

	// Packet: 0x02bb
	packet_db[0x02bb].len = 8;

	// Packet: 0x02b9
	packet_db[0x02b9].len = 191;

	// Packet: 0x02ba
	packet_db[0x02ba].len = 11;

	// Packet: 0x02bc
	packet_db[0x02bc].len = 6;

	// Packet: 0x02b3
	packet_db[0x02b3].len = 107;

	// Packet: 0x02b4
	packet_db[0x02b4].len = 6;

	// Packet: 0x02b6
	packet_db[0x02b6].len = 7;

	// Packet: 0x02b7
	packet_db[0x02b7].len = 7;

	// Packet: 0x02c1
	packet_db[0x02c1].len = -1;

	// Packet: 0x02c2
	packet_db[0x02c2].len = -1;

	// Packet: 0x02c5
	packet_db[0x02c5].len = 30;

	// Packet: 0x02c8
	packet_db[0x02c8].len = 3;

	// Packet: 0x02c9
	packet_db[0x02c9].len = 3;

	// Packet: 0x02c6
	packet_db[0x02c6].len = 30;

	// Packet: 0x02c7
	packet_db[0x02c7].len = 7;

	// Packet: 0x02cb
	packet_db[0x02cb].len = 65;

	// Packet: 0x02cc
	packet_db[0x02cc].len = 4;

	// Packet: 0x02cd
	packet_db[0x02cd].len = 71;

	// Packet: 0x02ce
	packet_db[0x02ce].len = 10;

	// Packet: 0x02cf
	packet_db[0x02cf].len = 6;

	// Packet: 0x02d5
	packet_db[0x02d5].len = 2;

	// Packet: 0x02d0
	packet_db[0x02d0].len = -1;

	// Packet: 0x02d1
	packet_db[0x02d1].len = -1;

	// Packet: 0x02d2
	packet_db[0x02d2].len = -1;

	// Packet: 0x02d3
	packet_db[0x02d3].len = 4;

	// Packet: 0x02d4
	packet_db[0x02d4].len = 39;

	// Packet: 0x02d6
	packet_db[0x02d6].len = 6;

	// Packet: 0x02d7
	packet_db[0x02d7].len = -1;

	// Packet: 0x02d8
	packet_db[0x02d8].len = 10;

	// Packet: 0x02d9
	packet_db[0x02d9].len = 10;

	// Packet: 0x02da
	packet_db[0x02da].len = 3;

	// Packet: 0x02db
	packet_db[0x02db].len = -1;

	// Packet: 0x02dc
	packet_db[0x02dc].len = -1;

	// Packet: 0x02dd
	packet_db[0x02dd].len = 32;

	// Packet: 0x02de
	packet_db[0x02de].len = 6;

	// Packet: 0x02df
	packet_db[0x02df].len = 36;

	// Packet: 0x02e0
	packet_db[0x02e0].len = 34;

	// Packet: 0x02e1
	packet_db[0x02e1].len = 33;

	// Packet: 0x02e2
	packet_db[0x02e2].len = 8;

	// Packet: 0x02e3
	packet_db[0x02e3].len = 10;

	// Packet: 0x02e4
	packet_db[0x02e4].len = 6;

	// Packet: 0x02e5
	packet_db[0x02e5].len = 5;

	// Packet: 0x02e6
	packet_db[0x02e6].len = 6;

	// Packet: 0x02e7
	packet_db[0x02e7].len = -1;

	// Packet: 0x02e8
	packet_db[0x02e8].len = -1;

	// Packet: 0x02e9
	packet_db[0x02e9].len = -1;

	// Packet: 0x02ea
	packet_db[0x02ea].len = -1;

	// Packet: 0x02eb
	packet_db[0x02eb].len = 13;

	// Packet: 0x02ec
	packet_db[0x02ec].len = 71;

	// Packet: 0x02ed
	packet_db[0x02ed].len = 63;

	// Packet: 0x02ee
	packet_db[0x02ee].len = 64;

	// Packet: 0x02ef
	packet_db[0x02ef].len = 8;

	// Packet: 0x02f0
	packet_db[0x02f0].len = 10;

	// Packet: 0x02f1
	packet_db[0x02f1].len = 2;

	// Packet: 0x02f2
	packet_db[0x02f2].len = 2;

	// Packet: 0x035c
	packet_db[0x035c].len = 2;

	// Packet: 0x035d
	packet_db[0x035d].len = -1;

	// Packet: 0x035e
	packet_db[0x035e].len = 2;

	// Packet: 0x03dd
	packet_db[0x03dd].len = 18;

	// Packet: 0x03de
	packet_db[0x03de].len = 18;

	// Packet: 0x0439
	packet_db[0x0439].len = 8;

	// Packet: 0x043d
	packet_db[0x043d].len = 8;

	// Packet: 0x043e
	packet_db[0x043e].len = -1;

	// Packet: 0x043f
	packet_db[0x043f].len = 25;

	// Packet: 0x0440
	packet_db[0x0440].len = 10;

	// Packet: 0x0441
	packet_db[0x0441].len = 4;

	// Packet: 0x0442
	packet_db[0x0442].len = -1;

	// Packet: 0x0446
	packet_db[0x0446].len = 14;

	// Packet: 0x0448
	packet_db[0x0448].len = -1;

	// Packet: 0x0449
	packet_db[0x0449].len = 4;

	// Packet: 0x044a
	packet_db[0x044a].len = 6;

	// Packet: 0x044b
	packet_db[0x044b].len = 2;

	// Packet: 0x0447
	packet_db[0x0447].len = 2;

	// Packet: 0x07d7
	packet_db[0x07d7].len = 8;

	// Packet: 0x07d8
	packet_db[0x07d8].len = 8;

	// Packet: 0x07d9
	packet_db[0x07d9].len = 268;

	// Packet: 0x07da
	packet_db[0x07da].len = 6;

	// Packet: 0x07db
	packet_db[0x07db].len = 8;

	// Packet: 0x07dc
	packet_db[0x07dc].len = 6;

	// Packet: 0x07dd
	packet_db[0x07dd].len = 54;

	// Packet: 0x07de
	packet_db[0x07de].len = 30;

	// Packet: 0x07df
	packet_db[0x07df].len = 54;

	// Packet: 0x07e0
	packet_db[0x07e0].len = 58;

	// Packet: 0x07e1
	packet_db[0x07e1].len = 15;

	// Packet: 0x07e2
	packet_db[0x07e2].len = 8;

	// Packet: 0x07e3
	packet_db[0x07e3].len = 6;

	// Packet: 0x07e6
	packet_db[0x07e6].len = 8;

	// Packet: 0x07e5
	packet_db[0x07e5].len = 4;

	// Packet: 0x07e8
	packet_db[0x07e8].len = -1;

	// Packet: 0x07e7
	packet_db[0x07e7].len = 32;

	// Packet: 0x07e9
	packet_db[0x07e9].len = 5;

	// Packet: 0x07ea
	packet_db[0x07ea].len = 2;

	// Packet: 0x07eb
	packet_db[0x07eb].len = -1;

	// Packet: 0x07ed
	packet_db[0x07ed].len = 10;

	// Packet: 0x07ee
	packet_db[0x07ee].len = 6;

	// Packet: 0x07ef
	packet_db[0x07ef].len = 8;

	// Packet: 0x07f0
	packet_db[0x07f0].len = 6;

	// Packet: 0x07f1
	packet_db[0x07f1].len = 18;

	// Packet: 0x07f2
	packet_db[0x07f2].len = 8;

	// Packet: 0x07f3
	packet_db[0x07f3].len = 6;

	// Packet: 0x07f4
	packet_db[0x07f4].len = 3;

	// Packet: 0x07f5
	packet_db[0x07f5].len = 6;

	// Packet: 0x07f6
	packet_db[0x07f6].len = 14;

	// Packet: 0x07f7
	packet_db[0x07f7].len = -1;

	// Packet: 0x07f8
	packet_db[0x07f8].len = -1;

	// Packet: 0x07f9
	packet_db[0x07f9].len = -1;

	// Packet: 0x07fa
	packet_db[0x07fa].len = 8;

	// Packet: 0x07fb
	packet_db[0x07fb].len = 25;

	// Packet: 0x07fc
	packet_db[0x07fc].len = 10;

	// Packet: 0x07fd
	packet_db[0x07fd].len = -1;

	// Packet: 0x07fe
	packet_db[0x07fe].len = 26;

	// Packet: 0x0800
	packet_db[0x0800].len = -1;

	// Packet: 0x0801
	packet_db[0x0801].len = -1;

	// Packet: 0x0803
	packet_db[0x0803].len = 4;

	// Packet: 0x0804
	packet_db[0x0804].len = 14;

	// Packet: 0x0805
	packet_db[0x0805].len = -1;

	// Packet: 0x0806
	packet_db[0x0806].len = 2;

	// Packet: 0x0807
	packet_db[0x0807].len = 4;

	// Packet: 0x0808
	packet_db[0x0808].len = 14;

	// Packet: 0x0809
	packet_db[0x0809].len = 50;

	// Packet: 0x080a
	packet_db[0x080a].len = 18;

	// Packet: 0x080b
	packet_db[0x080b].len = 6;

	// Packet: 0x080c
	packet_db[0x080c].len = 2;

	// Packet: 0x080d
	packet_db[0x080d].len = 3;

	// Packet: 0x080e
	packet_db[0x080e].len = 14;

	// Packet: 0x080f
	packet_db[0x080f].len = 30;

	// Packet: 0x0810
	packet_db[0x0810].len = 3;

	// Packet: 0x0812
	packet_db[0x0812].len = 8;

	// Packet: 0x0813
	packet_db[0x0813].len = -1;

	// Packet: 0x0814
	packet_db[0x0814].len = 86;

	// Packet: 0x0816
	packet_db[0x0816].len = 6;

	// Packet: 0x0818
	packet_db[0x0818].len = -1;

	// Packet: 0x081a
	packet_db[0x081a].len = 4;

	// Packet: 0x0824
	packet_db[0x0824].len = 8;

	// Packet: 0x081b
	packet_db[0x081b].len = 12;

	// Packet: 0x081c
	packet_db[0x081c].len = 10;

	// Packet: 0x081d
	packet_db[0x081d].len = 22;

	// Packet: 0x081e
	packet_db[0x081e].len = 8;

	// Packet: 0x081f
	packet_db[0x081f].len = -1;

	// Packet: 0x0820
	packet_db[0x0820].len = 11;

	// Packet: 0x0821
	packet_db[0x0821].len = 2;

	// Packet: 0x0822
	packet_db[0x0822].len = 9;

	// Packet: 0x0823
	packet_db[0x0823].len = -1;

	// Packet: 0x0825
	packet_db[0x0825].len = -1;

	// Packet: 0x0826
	packet_db[0x0826].len = 4;

	// Packet: 0x0836
	packet_db[0x0836].len = -1;

	// Packet: 0x0837
	packet_db[0x0837].len = 3;

	// Packet: 0x0839
	packet_db[0x0839].len = 66;

	// Packet: 0x083a
	packet_db[0x083a].len = 5;

	// Packet: 0x083b
	packet_db[0x083b].len = 2;

	// Packet: 0x083d
	packet_db[0x083d].len = 6;

	// Packet: 0x083e
	packet_db[0x083e].len = 26;

	// Packet: 0x0840
	packet_db[0x0840].len = -1;

	// Packet: 0x0841
	packet_db[0x0841].len = 4;

	// Packet: 0x0827
	packet_db[0x0827].len = 6;

	// Packet: 0x0828
	packet_db[0x0828].len = 14;

	// Packet: 0x0829
	packet_db[0x0829].len = 12;

	// Packet: 0x082a
	packet_db[0x082a].len = 10;

	// Packet: 0x082b
	packet_db[0x082b].len = 6;

	// Packet: 0x082c
	packet_db[0x082c].len = 10;

	// Packet: 0x0842
	packet_db[0x0842].len = 6;

	// Packet: 0x0843
	packet_db[0x0843].len = 6;

	// Packet: 0x0844
	packet_db[0x0844].len = 2;

	// Packet: 0x0845
	packet_db[0x0845].len = 6;

	// Packet: 0x0846
	packet_db[0x0846].len = 4;

	// Packet: 0x0847
	packet_db[0x0847].len = -1;

	// Packet: 0x0848
	packet_db[0x0848].len = -1;

	// Packet: 0x0849
	packet_db[0x0849].len = 12;

	// Packet: 0x084a
	packet_db[0x084a].len = 2;

	// Packet: 0x084b
	packet_db[0x084b].len = 21;

	// Packet: 0x084c
	packet_db[0x084c].len = 10;

	// Packet: 0x084d
	packet_db[0x084d].len = 10;

	// Packet: 0x084e
	packet_db[0x084e].len = 5;

	// Packet: 0x084f
	packet_db[0x084f].len = 6;

	// Packet: 0x0850
	packet_db[0x0850].len = 7;

	// Packet: 0x0855
	packet_db[0x0855].len = 6;

	// Packet: 0x0851
	packet_db[0x0851].len = -1;

	// Packet: 0x0852
	packet_db[0x0852].len = 2;

	// Packet: 0x0853
	packet_db[0x0853].len = -1;

	// Packet: 0x0854
	packet_db[0x0854].len = -1;

	// Packet: 0x0856
	packet_db[0x0856].len = -1;

	// Packet: 0x0857
	packet_db[0x0857].len = -1;

	// Packet: 0x0858
	packet_db[0x0858].len = -1;

	// Packet: 0x0859
	packet_db[0x0859].len = -1;

	// Packet: 0x08b1
	packet_db[0x08b1].len = -1;

	// Packet: 0x082d
	packet_db[0x082d].len = -1;

	// Packet: 0x08b2
	packet_db[0x08b2].len = -1;

	// Packet: 0x08af
	packet_db[0x08af].len = 10;

	// Packet: 0x08b0
	packet_db[0x08b0].len = 17;

	// Packet: 0x08b3
	packet_db[0x08b3].len = -1;

	// Packet: 0x08b4
	packet_db[0x08b4].len = 2;

	// Packet: 0x08b5
	packet_db[0x08b5].len = 6;

	// Packet: 0x08b6
	packet_db[0x08b6].len = 3;

	// Packet: 0x02f3
	packet_db[0x02f3].len = -1;

	// Packet: 0x02f4
	packet_db[0x02f4].len = 3;

	// Packet: 0x02f5
	packet_db[0x02f5].len = 7;

	// Packet: 0x02f6
	packet_db[0x02f6].len = 7;

	// Packet: 0x08b8
	packet_db[0x08b8].len = 10;

	// Packet: 0x08b9
	packet_db[0x08b9].len = 12;

	// Packet: 0x08ba
	packet_db[0x08ba].len = 10;

	// Packet: 0x08bb
	packet_db[0x08bb].len = 8;

	// Packet: 0x08bc
	packet_db[0x08bc].len = 10;

	// Packet: 0x08bd
	packet_db[0x08bd].len = 8;

	// Packet: 0x08be
	packet_db[0x08be].len = 14;

	// Packet: 0x08bf
	packet_db[0x08bf].len = 8;

	// Packet: 0x08c3
	packet_db[0x08c3].len = 10;

	// Packet: 0x08c4
	packet_db[0x08c4].len = 8;

	// Packet: 0x08c5
	packet_db[0x08c5].len = 6;

	// Packet: 0x08c6
	packet_db[0x08c6].len = 4;

	// Packet: 0x08c0
	packet_db[0x08c0].len = -1;

	// Packet: 0x08c1
	packet_db[0x08c1].len = 2;

	// Packet: 0x08c2
	packet_db[0x08c2].len = 2;

	// Packet: 0x08c7
	packet_db[0x08c7].len = -1;

	// Packet: 0x08c8
	packet_db[0x08c8].len = 34;

	// Packet: 0x08c9
	packet_db[0x08c9].len = 2;

	// Packet: 0x08ca
	packet_db[0x08ca].len = -1;

	// Packet: 0x08cb
	packet_db[0x08cb].len = -1;

	// Packet: 0x097b
	packet_db[0x097b].len = -1;

	// Packet: 0x08cc
	packet_db[0x08cc].len = 109;

	// Packet: 0x08ce
	packet_db[0x08ce].len = 2;

	// Packet: 0x08cf
	packet_db[0x08cf].len = 10;

	// Packet: 0x08d0
	packet_db[0x08d0].len = 9;

	// Packet: 0x08d1
	packet_db[0x08d1].len = 7;

	// Packet: 0x08d2
	packet_db[0x08d2].len = 10;

	// Packet: 0x08d3
	packet_db[0x08d3].len = 10;

	// Packet: 0x08d4
	packet_db[0x08d4].len = 8;

	// Packet: 0x08d5
	packet_db[0x08d5].len = -1;

	// Packet: 0x08d6
	packet_db[0x08d6].len = 6;

	// Packet: 0x08d7
	packet_db[0x08d7].len = 28;

	// Packet: 0x08d8
	packet_db[0x08d8].len = 27;

	// Packet: 0x08d9
	packet_db[0x08d9].len = 30;

	// Packet: 0x08da
	packet_db[0x08da].len = 26;

	// Packet: 0x08db
	packet_db[0x08db].len = 27;

	// Packet: 0x08dc
	packet_db[0x08dc].len = 26;

	// Packet: 0x08dd
	packet_db[0x08dd].len = 27;

	// Packet: 0x08de
	packet_db[0x08de].len = 27;

	// Packet: 0x08df
	packet_db[0x08df].len = 50;

	// Packet: 0x08e0
	packet_db[0x08e0].len = 51;

	// Packet: 0x08e1
	packet_db[0x08e1].len = 51;

	// Packet: 0x08e2
	packet_db[0x08e2].len = 27;

	// Packet: 0x08e3
	packet_db[0x08e3].len = 157;

	// Packet: 0x08e4
	packet_db[0x08e4].len = 6;

	// Packet: 0x08fc
	packet_db[0x08fc].len = 30;

	// Packet: 0x08fd
	packet_db[0x08fd].len = 6;

	// Packet: 0x08fe
	packet_db[0x08fe].len = -1;

	// Packet: 0x08ff
	packet_db[0x08ff].len = 24;

	// Packet: 0x0900
	packet_db[0x0900].len = -1;

	// Packet: 0x0901
	packet_db[0x0901].len = -1;

	// Packet: 0x0902
	packet_db[0x0902].len = -1;

	// Packet: 0x0903
	packet_db[0x0903].len = -1;

	// Packet: 0x0904
	packet_db[0x0904].len = -1;

	// Packet: 0x0905
	packet_db[0x0905].len = -1;

	// Packet: 0x0906
	packet_db[0x0906].len = -1;

	// Packet: 0x0907
	packet_db[0x0907].len = 5;

	// Packet: 0x0908
	packet_db[0x0908].len = 5;

	// Packet: 0x090a
	packet_db[0x090a].len = 26;

	// Packet: 0x090d
	packet_db[0x090d].len = -1;

	// Packet: 0x090e
	packet_db[0x090e].len = 2;

	// Packet: 0x0910
	packet_db[0x0910].len = 10;

	// Packet: 0x0911
	packet_db[0x0911].len = 30;

	// Packet: 0x0912
	packet_db[0x0912].len = 10;

	// Packet: 0x0913
	packet_db[0x0913].len = 30;

	// Packet: 0x0914
	packet_db[0x0914].len = -1;

	// Packet: 0x090f
	packet_db[0x090f].len = -1;

	// Packet: 0x0915
	packet_db[0x0915].len = -1;

	// Packet: 0x0916
	packet_db[0x0916].len = 26;

	// Packet: 0x096b
	packet_db[0x096b].len = 4;

	// Packet: 0x096c
	packet_db[0x096c].len = 6;

	// Packet: 0x096d
	packet_db[0x096d].len = -1;

	// Packet: 0x096e
	packet_db[0x096e].len = -1;

	// Packet: 0x096f
	packet_db[0x096f].len = 7;

	// Packet: 0x0971
	packet_db[0x0971].len = 6;

	// Packet: 0x0972
	packet_db[0x0972].len = -1;

	// Packet: 0x0973
	packet_db[0x0973].len = 7;

	// Packet: 0x0974
	packet_db[0x0974].len = 2;

	// Packet: 0x0975
	packet_db[0x0975].len = -1;

	// Packet: 0x0976
	packet_db[0x0976].len = -1;

	// Packet: 0x0977
	packet_db[0x0977].len = 14;

	// Packet: 0x0978
	packet_db[0x0978].len = 6;

	// Packet: 0x0979
	packet_db[0x0979].len = 50;

	// Packet: 0x097a
	packet_db[0x097a].len = -1;

	// Packet: 0x097c
	packet_db[0x097c].len = 4;

	// Packet: 0x097d
	packet_db[0x097d].len = 288;

	// Packet: 0x097e
	packet_db[0x097e].len = 12;

	// Packet: 0x097f
	packet_db[0x097f].len = -1;

	// Packet: 0x0980
	packet_db[0x0980].len = 7;

	// Packet: 0x0981
	packet_db[0x0981].len = -1;

	// Packet: 0x0982
	packet_db[0x0982].len = 7;

	// Packet: 0x0983
	packet_db[0x0983].len = 29;

	// Packet: 0x0984
	packet_db[0x0984].len = 28;

	// Packet: 0x0985
	packet_db[0x0985].len = -1;

	// Packet: 0x0986
	packet_db[0x0986].len = 10;

	// Packet: 0x0987
	packet_db[0x0987].len = -1;

	// Packet: 0x0988
	packet_db[0x0988].len = 6;

	// Packet: 0x0989
	packet_db[0x0989].len = 2;

	// Packet: 0x098a
	packet_db[0x098a].len = -1;

	// Packet: 0x098d
	packet_db[0x098d].len = -1;

	// Packet: 0x098e
	packet_db[0x098e].len = -1;

	// Packet: 0x098b
	packet_db[0x098b].len = 2;

	// Packet: 0x098c
	packet_db[0x098c].len = 4;

	// Packet: 0x098f
	packet_db[0x098f].len = -1;

	// Packet: 0x0990
	packet_db[0x0990].len = 41;

	// Packet: 0x0991
	packet_db[0x0991].len = -1;

	// Packet: 0x0992
	packet_db[0x0992].len = -1;

	// Packet: 0x0993
	packet_db[0x0993].len = -1;

	// Packet: 0x0994
	packet_db[0x0994].len = -1;

	// Packet: 0x0995
	packet_db[0x0995].len = -1;

	// Packet: 0x0996
	packet_db[0x0996].len = -1;

	// Packet: 0x0997
	packet_db[0x0997].len = -1;

	// Packet: 0x0998
	packet_db[0x0998].len = 8;

	// Packet: 0x0999
	packet_db[0x0999].len = 11;

	// Packet: 0x099a
	packet_db[0x099a].len = 9;

	// Packet: 0x099b
	packet_db[0x099b].len = 8;

	// Packet: 0x099c
	packet_db[0x099c].len = 6;

	// Packet: 0x099d
	packet_db[0x099d].len = -1;

	// Packet: 0x099e
	packet_db[0x099e].len = 12;

	// Packet: 0x099f
	packet_db[0x099f].len = -1;

	// Packet: 0x09a0
	packet_db[0x09a0].len = 6;

	// Packet: 0x09a1
	packet_db[0x09a1].len = 2;

	// Packet: 0x09a2
	packet_db[0x09a2].len = 6;

	// Packet: 0x09a3
	packet_db[0x09a3].len = -1;

	// Packet: 0x09a4
	packet_db[0x09a4].len = 18;

	// Packet: 0x09a5
	packet_db[0x09a5].len = 7;

	// Packet: 0x09ab
	packet_db[0x09ab].len = 6;

	// Packet: 0x09a6
	packet_db[0x09a6].len = 12;

	// Packet: 0x09a7
	packet_db[0x09a7].len = 10;

	// Packet: 0x09a8
	packet_db[0x09a8].len = 16;

	// Packet: 0x09a9
	packet_db[0x09a9].len = 10;

	// Packet: 0x09aa
	packet_db[0x09aa].len = 16;

	// Packet: 0x09ac
	packet_db[0x09ac].len = -1;

	// Packet: 0x09ad
	packet_db[0x09ad].len = 12;

	// Packet: 0x09ae
	packet_db[0x09ae].len = 19;

	// Packet: 0x09af
	packet_db[0x09af].len = 4;

	// Packet: 0x09b0
	packet_db[0x09b0].len = 10;

	// Packet: 0x09b1
	packet_db[0x09b1].len = 4;

	// Packet: 0x09b2
	packet_db[0x09b2].len = 10;

	// Packet: 0x09b3
	packet_db[0x09b3].len = 6;

	// Packet: 0x09b4
	packet_db[0x09b4].len = 6;

	// Packet: 0x09b5
	packet_db[0x09b5].len = 2;

	// Packet: 0x09b6
	packet_db[0x09b6].len = 6;

	// Packet: 0x09b7
	packet_db[0x09b7].len = 4;

	// Packet: 0x09b8
	packet_db[0x09b8].len = 6;

	// Packet: 0x09b9
	packet_db[0x09b9].len = 4;

	// Packet: 0x09ba
	packet_db[0x09ba].len = 2;

	// Packet: 0x09bb
	packet_db[0x09bb].len = 6;

	// Packet: 0x09bc
	packet_db[0x09bc].len = 6;

	// Packet: 0x09bd
	packet_db[0x09bd].len = 2;

	// Packet: 0x09be
	packet_db[0x09be].len = 2;

	// Packet: 0x09bf
	packet_db[0x09bf].len = 4;

	// Packet: 0x09c1
	packet_db[0x09c1].len = 10;

	// Packet: 0x09c2
	packet_db[0x09c2].len = -1;

	// Packet: 0x09c3
	packet_db[0x09c3].len = 10;

	// Packet: 0x09c4
	packet_db[0x09c4].len = 10;

	// Packet: 0x09c5
	packet_db[0x09c5].len = 1042;

	// Packet: 0x09c6
	packet_db[0x09c6].len = -1;

	// Packet: 0x09c7
	packet_db[0x09c7].len = 18;

	// Packet: 0x09c8
	packet_db[0x09c8].len = -1;

	// Packet: 0x09c9
	packet_db[0x09c9].len = -1;

	// Packet: 0x09ca
	packet_db[0x09ca].len = -1;

	// Packet: 0x09cb
	packet_db[0x09cb].len = 17;

	// Packet: 0x09cc
	packet_db[0x09cc].len = -1;

	// Packet: 0x09cd
	packet_db[0x09cd].len = 8;

	// Packet: 0x09ce
	packet_db[0x09ce].len = 102;

	// Packet: 0x09cf
	packet_db[0x09cf].len = -1;

	// Packet: 0x09d0
	packet_db[0x09d0].len = -1;

	// Packet: 0x09d1
	packet_db[0x09d1].len = 14;

	// Packet: 0x09d2
	packet_db[0x09d2].len = -1;

	// Packet: 0x09d3
	packet_db[0x09d3].len = -1;

	// Packet: 0x09d4
	packet_db[0x09d4].len = 2;

	// Packet: 0x09d5
	packet_db[0x09d5].len = -1;

	// Packet: 0x09d6
	packet_db[0x09d6].len = -1;

	// Packet: 0x09d8
	packet_db[0x09d8].len = 2;

	// Packet: 0x09d7
	packet_db[0x09d7].len = -1;

	// Packet: 0x09d9
	packet_db[0x09d9].len = 4;

	// Packet: 0x09da
	packet_db[0x09da].len = -1;

	// Packet: 0x09db
	packet_db[0x09db].len = -1;

	// Packet: 0x09dc
	packet_db[0x09dc].len = -1;

	// Packet: 0x09dd
	packet_db[0x09dd].len = -1;

	// Packet: 0x09de
	packet_db[0x09de].len = -1;

	// Packet: 0x09df
	packet_db[0x09df].len = 7;

	// Packet: 0x09e0
	packet_db[0x09e0].len = -1;

	// Packet: 0x09e1
	packet_db[0x09e1].len = 8;

	// Packet: 0x09e2
	packet_db[0x09e2].len = 8;

	// Packet: 0x09e3
	packet_db[0x09e3].len = 8;

	// Packet: 0x09e4
	packet_db[0x09e4].len = 8;

	// Packet: 0x09e5
	packet_db[0x09e5].len = 18;

	// Packet: 0x09e6
	packet_db[0x09e6].len = 24;

	// Packet: 0x09e7
	packet_db[0x09e7].len = 3;

	// Packet: 0x09e8
	packet_db[0x09e8].len = 11;

	// Packet: 0x09e9
	packet_db[0x09e9].len = 2;

	// Packet: 0x09ee
	packet_db[0x09ee].len = 11;

	// Packet: 0x09ef
	packet_db[0x09ef].len = 11;

	// Packet: 0x09f0
	packet_db[0x09f0].len = -1;

	// Packet: 0x0a7d
	packet_db[0x0a7d].len = -1;

	// Packet: 0x09f5
	packet_db[0x09f5].len = 11;

	// Packet: 0x09f6
	packet_db[0x09f6].len = 11;

	// Packet: 0x09ea
	packet_db[0x09ea].len = 11;

	// Packet: 0x09eb
	packet_db[0x09eb].len = -1;

	// Packet: 0x09f7
	packet_db[0x09f7].len = 77;

	// Packet: 0x09ec
	packet_db[0x09ec].len = -1;

	// Packet: 0x09ed
	packet_db[0x09ed].len = 3;

	// Packet: 0x09f3
	packet_db[0x09f3].len = 11;

	// Packet: 0x09f4
	packet_db[0x09f4].len = 12;

	// Packet: 0x09f1
	packet_db[0x09f1].len = 11;

	// Packet: 0x09f2
	packet_db[0x09f2].len = 12;

	// Packet: 0x0a04
	packet_db[0x0a04].len = 6;

	// Packet: 0x0a05
	packet_db[0x0a05].len = 63;

	// Packet: 0x0a06
	packet_db[0x0a06].len = 6;

	// Packet: 0x0a07
	packet_db[0x0a07].len = 9;

	// Packet: 0x0a03
	packet_db[0x0a03].len = 2;

	// Packet: 0x0a08
	packet_db[0x0a08].len = 26;

	// Packet: 0x0a12
	packet_db[0x0a12].len = 27;

	// Packet: 0x0a13
	packet_db[0x0a13].len = 26;

	// Packet: 0x0a14
	packet_db[0x0a14].len = 10;

	// Packet: 0x0a51
	packet_db[0x0a51].len = 34;

	// Packet: 0x0a32
	packet_db[0x0a32].len = 2;

	// Packet: 0x09f8
	packet_db[0x09f8].len = -1;

	// Packet: 0x09f9
	packet_db[0x09f9].len = 143;

	// Packet: 0x09fa
	packet_db[0x09fa].len = -1;

	// Packet: 0x09fb
	packet_db[0x09fb].len = -1;

	// Packet: 0x09fc
	packet_db[0x09fc].len = 6;

	// Packet: 0x09fd
	packet_db[0x09fd].len = -1;

	// Packet: 0x09fe
	packet_db[0x09fe].len = -1;

	// Packet: 0x09ff
	packet_db[0x09ff].len = -1;

	// Packet: 0x0a00
	packet_db[0x0a00].len = 269;

	// Packet: 0x0a01
	packet_db[0x0a01].len = 3;

	// Packet: 0x0a02
	packet_db[0x0a02].len = 4;

	// Packet: 0x0a09
	packet_db[0x0a09].len = 55;

	// Packet: 0x0a0a
	packet_db[0x0a0a].len = 57;

	// Packet: 0x0a0b
	packet_db[0x0a0b].len = 57;

	// Packet: 0x0a0c
	packet_db[0x0a0c].len = 66;

	// Packet: 0x0a0d
	packet_db[0x0a0d].len = -1;

	// Packet: 0x0a0f
	packet_db[0x0a0f].len = -1;

	// Packet: 0x0a10
	packet_db[0x0a10].len = -1;

	// Packet: 0x0a11
	packet_db[0x0a11].len = -1;

	// Packet: 0x0a0e
	packet_db[0x0a0e].len = 14;

	// Packet: 0x0a15
	packet_db[0x0a15].len = 12;

	// Packet: 0x0a16
	packet_db[0x0a16].len = 26;

	// Packet: 0x0a17
	packet_db[0x0a17].len = 6;

	// Packet: 0x0a18
	packet_db[0x0a18].len = 14;

	// Packet: 0x0a19
	packet_db[0x0a19].len = 2;

	// Packet: 0x0a1a
	packet_db[0x0a1a].len = 25;

	// Packet: 0x0a1b
	packet_db[0x0a1b].len = 2;

	// Packet: 0x0a1c
	packet_db[0x0a1c].len = -1;

	// Packet: 0x0a1d
	packet_db[0x0a1d].len = 2;

	// Packet: 0x0a1e
	packet_db[0x0a1e].len = 3;

	// Packet: 0x0a1f
	packet_db[0x0a1f].len = 2;

	// Packet: 0x0a20
	packet_db[0x0a20].len = 23;

	// Packet: 0x0a21
	packet_db[0x0a21].len = 3;

	// Packet: 0x0a22
	packet_db[0x0a22].len = 7;

	// Packet: 0x0a23
	packet_db[0x0a23].len = -1;

	// Packet: 0x0a24
	packet_db[0x0a24].len = 66;

	// Packet: 0x0a25
	packet_db[0x0a25].len = 6;

	// Packet: 0x0a26
	packet_db[0x0a26].len = 7;

	// Packet: 0x0a27
	packet_db[0x0a27].len = 8;

	// Packet: 0x0a28
	packet_db[0x0a28].len = 3;

	// Packet: 0x0a29
	packet_db[0x0a29].len = 6;

	// Packet: 0x0a2a
	packet_db[0x0a2a].len = 6;

	// Packet: 0x0a2b
	packet_db[0x0a2b].len = 10;

	// Packet: 0x0a2c
	packet_db[0x0a2c].len = 12;

	// Packet: 0x0a2d
	packet_db[0x0a2d].len = -1;

	// Packet: 0x0a2e
	packet_db[0x0a2e].len = 6;

	// Packet: 0x0a2f
	packet_db[0x0a2f].len = 7;

	// Packet: 0x0a30
	packet_db[0x0a30].len = 106;

	// Packet: 0x0a31
	packet_db[0x0a31].len = -1;

	// Packet: 0x0a33
	packet_db[0x0a33].len = 7;

	// Packet: 0x0a34
	packet_db[0x0a34].len = 6;

	// Packet: 0x0a35
	packet_db[0x0a35].len = 4;

	// Packet: 0x0a36
	packet_db[0x0a36].len = 7;

	// Packet: 0x0a37
	packet_db[0x0a37].len = 69;

	// Packet: 0x0a38
	packet_db[0x0a38].len = 3;

	// Packet: 0x0a68
	packet_db[0x0a68].len = 3;

	// Packet: 0x0ae2
	packet_db[0x0ae2].len = 7;

	// Packet: 0x0a39
	packet_db[0x0a39].len = 36;

	// Packet: 0x0a3a
	packet_db[0x0a3a].len = 12;

	// Packet: 0x0a3b
	packet_db[0x0a3b].len = -1;

	// Packet: 0x0a3c
	packet_db[0x0a3c].len = -1;

	// Packet: 0x0a3d
	packet_db[0x0a3d].len = 20;

	// Packet: 0x0a3e
	packet_db[0x0a3e].len = -1;

	// Packet: 0x0a3f
	packet_db[0x0a3f].len = 11;

	// Packet: 0x0a40
	packet_db[0x0a40].len = 11;

	// Packet: 0x0a41
	packet_db[0x0a41].len = 18;

	// Packet: 0x0a42
	packet_db[0x0a42].len = 43;

	// Packet: 0x0a43
	packet_db[0x0a43].len = 85;

	// Packet: 0x0a44
	packet_db[0x0a44].len = -1;

	// Packet: 0x0a46
	packet_db[0x0a46].len = 14;

	// Packet: 0x0a47
	packet_db[0x0a47].len = 3;

	// Packet: 0x0a48
	packet_db[0x0a48].len = 2;

	// Packet: 0x0afc
	packet_db[0x0afc].len = 16;

	// Packet: 0x0a49
	packet_db[0x0a49].len = 22;

	// Packet: 0x0a4a
	packet_db[0x0a4a].len = 6;

	// Packet: 0x0a4b
	packet_db[0x0a4b].len = 22;

	// Packet: 0x0a4c
	packet_db[0x0a4c].len = 28;

	// Packet: 0x0a8f
	packet_db[0x0a8f].len = 2;

	// Packet: 0x0a90
	packet_db[0x0a90].len = 3;

	// Packet: 0x0b23
	packet_db[0x0b23].len = 6;

	// Packet: 0x0a4d
	packet_db[0x0a4d].len = -1;

	// Packet: 0x0a79
	packet_db[0x0a79].len = -1;

	// Packet: 0x0b61
	packet_db[0x0b61].len = -1;

	// Packet: 0x0b6a
	packet_db[0x0b6a].len = -1;

	// Packet: 0x0a4e
	packet_db[0x0a4e].len = 6;

	// Packet: 0x0a70
	packet_db[0x0a70].len = 2;

	// Packet: 0x0a4f
	packet_db[0x0a4f].len = -1;

	// Packet: 0x0a50
	packet_db[0x0a50].len = 4;

	// Packet: 0x0a52
	packet_db[0x0a52].len = 20;

	// Packet: 0x0a53
	packet_db[0x0a53].len = 10;

	// Packet: 0x0a54
	packet_db[0x0a54].len = -1;

	// Packet: 0x0a55
	packet_db[0x0a55].len = 2;

	// Packet: 0x0a56
	packet_db[0x0a56].len = 6;

	// Packet: 0x0a57
	packet_db[0x0a57].len = 6;

	// Packet: 0x0a58
	packet_db[0x0a58].len = 8;

	// Packet: 0x0a59
	packet_db[0x0a59].len = -1;

	// Packet: 0x0a5a
	packet_db[0x0a5a].len = 2;

	// Packet: 0x0a5b
	packet_db[0x0a5b].len = 7;

	// Packet: 0x0a5c
	packet_db[0x0a5c].len = 18;

	// Packet: 0x0a5d
	packet_db[0x0a5d].len = 6;

	// Packet: 0x0a69
	packet_db[0x0a69].len = 6;

	// Packet: 0x0a6a
	packet_db[0x0a6a].len = 12;

	// Packet: 0x0a6b
	packet_db[0x0a6b].len = -1;

	// Packet: 0x0a6c
	packet_db[0x0a6c].len = 7;

	// Packet: 0x0a6d
	packet_db[0x0a6d].len = -1;

	// Packet: 0x0a6e
	packet_db[0x0a6e].len = -1;

	// Packet: 0x0a6f
	packet_db[0x0a6f].len = -1;

	// Packet: 0x0a71
	packet_db[0x0a71].len = -1;

	// Packet: 0x0a72
	packet_db[0x0a72].len = 61;

	// Packet: 0x0a73
	packet_db[0x0a73].len = 2;

	// Packet: 0x0a74
	packet_db[0x0a74].len = 8;

	// Packet: 0x0a76
	packet_db[0x0a76].len = 80;

	// Packet: 0x0a77
	packet_db[0x0a77].len = 15;

	// Packet: 0x0a78
	packet_db[0x0a78].len = 15;

	// Packet: 0x0a7b
	packet_db[0x0a7b].len = -1;

	// Packet: 0x0a7c
	packet_db[0x0a7c].len = -1;

	// Packet: 0x0a7e
	packet_db[0x0a7e].len = -1;

	// Packet: 0x0a8c
	packet_db[0x0a8c].len = 2;

	// Packet: 0x0a80
	packet_db[0x0a80].len = 6;

	// Packet: 0x0a7f
	packet_db[0x0a7f].len = -1;

	// Packet: 0x0a8d
	packet_db[0x0a8d].len = -1;

	// Packet: 0x0a81
	packet_db[0x0a81].len = 4;

	// Packet: 0x0a92
	packet_db[0x0a92].len = -1;

	// Packet: 0x0a91
	packet_db[0x0a91].len = -1;

	// Packet: 0x0a93
	packet_db[0x0a93].len = 3;

	// Packet: 0x0a94
	packet_db[0x0a94].len = 2;

	// Packet: 0x0a89
	packet_db[0x0a89].len = 61;

	// Packet: 0x0b05
	packet_db[0x0b05].len = 63;

	// Packet: 0x0a8a
	packet_db[0x0a8a].len = 6;

	// Packet: 0x0a82
	packet_db[0x0a82].len = 46;

	// Packet: 0x0a83
	packet_db[0x0a83].len = 46;

	// Packet: 0x0a84
	packet_db[0x0a84].len = 94;

	// Packet: 0x0a85
	packet_db[0x0a85].len = 82;

	// Packet: 0x0a86
	packet_db[0x0a86].len = -1;

	// Packet: 0x0a87
	packet_db[0x0a87].len = -1;

	// Packet: 0x0a88
	packet_db[0x0a88].len = 2;

	// Packet: 0x0a8b
	packet_db[0x0a8b].len = 2;

	// Packet: 0x0a8e
	packet_db[0x0a8e].len = 2;

	// Packet: 0x0a95
	packet_db[0x0a95].len = 4;

	// Packet: 0x0a96
	packet_db[0x0a96].len = 61;

	// Packet: 0x0a97
	packet_db[0x0a97].len = 8;

	// Packet: 0x0a98
	packet_db[0x0a98].len = 10;

	// Packet: 0x0a99
	packet_db[0x0a99].len = 4;

	// Packet: 0x0a9a
	packet_db[0x0a9a].len = 10;

	// Packet: 0x0a9b
	packet_db[0x0a9b].len = -1;

	// Packet: 0x0a9c
	packet_db[0x0a9c].len = 2;

	// Packet: 0x0ace
	packet_db[0x0ace].len = 4;

	// Packet: 0x0a9d
	packet_db[0x0a9d].len = 4;

	// Packet: 0x0a9e
	packet_db[0x0a9e].len = 2;

	// Packet: 0x0a9f
	packet_db[0x0a9f].len = 2;

	// Packet: 0x0aa0
	packet_db[0x0aa0].len = 2;

	// Packet: 0x0aa1
	packet_db[0x0aa1].len = 4;

	// Packet: 0x0aa2
	packet_db[0x0aa2].len = -1;

	// Packet: 0x0aa3
	packet_db[0x0aa3].len = 9;

	// Packet: 0x0aa4
	packet_db[0x0aa4].len = 2;

	// Packet: 0x0aa5
	packet_db[0x0aa5].len = -1;

	// Packet: 0x0aa6
	packet_db[0x0aa6].len = 36;

	// Packet: 0x0aa7
	packet_db[0x0aa7].len = 6;

	// Packet: 0x0aa8
	packet_db[0x0aa8].len = 5;

	// Packet: 0x0aa9
	packet_db[0x0aa9].len = -1;

	// Packet: 0x0aaa
	packet_db[0x0aaa].len = -1;

	// Packet: 0x0aab
	packet_db[0x0aab].len = -1;

	// Packet: 0x0aac
	packet_db[0x0aac].len = 69;

	// Packet: 0x0ab1
	packet_db[0x0ab1].len = 14;

	// Packet: 0x0aad
	packet_db[0x0aad].len = 51;

	// Packet: 0x0aae
	packet_db[0x0aae].len = 2;

	// Packet: 0x0aaf
	packet_db[0x0aaf].len = 6;

	// Packet: 0x0ab0
	packet_db[0x0ab0].len = 6;

	// Packet: 0x0aba
	packet_db[0x0aba].len = 2;

	// Packet: 0x0abb
	packet_db[0x0abb].len = 2;

	// Packet: 0x0ab2
	packet_db[0x0ab2].len = 7;

	// Packet: 0x0ab3
	packet_db[0x0ab3].len = 19;

	// Packet: 0x0ab4
	packet_db[0x0ab4].len = 6;

	// Packet: 0x0ab5
	packet_db[0x0ab5].len = 2;

	// Packet: 0x0ab6
	packet_db[0x0ab6].len = 8;

	// Packet: 0x0ab7
	packet_db[0x0ab7].len = 4;

	// Packet: 0x0ab8
	packet_db[0x0ab8].len = 2;

	// Packet: 0x0ab9
	packet_db[0x0ab9].len = 47;

	// Packet: 0x0abc
	packet_db[0x0abc].len = -1;

	// Packet: 0x0abd
	packet_db[0x0abd].len = 10;

	// Packet: 0x0abe
	packet_db[0x0abe].len = -1;

	// Packet: 0x0abf
	packet_db[0x0abf].len = -1;

	// Packet: 0x0ac0
	packet_db[0x0ac0].len = 26;

	// Packet: 0x0ac1
	packet_db[0x0ac1].len = 26;

	// Packet: 0x0ac2
	packet_db[0x0ac2].len = -1;

	// Packet: 0x0ac3
	packet_db[0x0ac3].len = 2;

	// Packet: 0x0ac4
	packet_db[0x0ac4].len = -1;

	// Packet: 0x0ac5
	packet_db[0x0ac5].len = 156;

	// Packet: 0x0ac6
	packet_db[0x0ac6].len = 156;

	// Packet: 0x0ac7
	packet_db[0x0ac7].len = 156;

	// Packet: 0x0ac8
	packet_db[0x0ac8].len = 2;

	// Packet: 0x0ac9
	packet_db[0x0ac9].len = -1;

	// Packet: 0x0aca
	packet_db[0x0aca].len = 3;

	// Packet: 0x0acb
	packet_db[0x0acb].len = 12;

	// Packet: 0x0acc
	packet_db[0x0acc].len = 18;

	// Packet: 0x0acd
	packet_db[0x0acd].len = 23;

	// Packet: 0x0acf
	packet_db[0x0acf].len = 68;

	// Packet: 0x0ad0
	packet_db[0x0ad0].len = 11;

	// Packet: 0x0ad1
	packet_db[0x0ad1].len = -1;

	// Packet: 0x0ad2
	packet_db[0x0ad2].len = 30;

	// Packet: 0x0ad3
	packet_db[0x0ad3].len = -1;

	// Packet: 0x0ad4
	packet_db[0x0ad4].len = -1;

	// Packet: 0x0ad5
	packet_db[0x0ad5].len = 2;

	// Packet: 0x0ad6
	packet_db[0x0ad6].len = 2;

	// Packet: 0x0ad7
	packet_db[0x0ad7].len = 8;

	// Packet: 0x0ad8
	packet_db[0x0ad8].len = 8;

	// Packet: 0x0ad9
	packet_db[0x0ad9].len = -1;

	// Packet: 0x0ada
	packet_db[0x0ada].len = 32;

	// Packet: 0x0adb
	packet_db[0x0adb].len = -1;

	// Packet: 0x0adc
	packet_db[0x0adc].len = 6;

	// Packet: 0x0add
	packet_db[0x0add].len = 24;

	// Packet: 0x0ade
	packet_db[0x0ade].len = 6;

	// Packet: 0x0adf
	packet_db[0x0adf].len = 58;

	// Packet: 0x0ae0
	packet_db[0x0ae0].len = 30;

	// Packet: 0x0ae1
	packet_db[0x0ae1].len = 28;

	// Packet: 0x0ae4
	packet_db[0x0ae4].len = 89;

	// Packet: 0x0ae5
	packet_db[0x0ae5].len = -1;

	// Packet: 0x0ae3
	packet_db[0x0ae3].len = -1;

	// Packet: 0x0ae6
	packet_db[0x0ae6].len = 10;

	// Packet: 0x0ae7
	packet_db[0x0ae7].len = 38;

	// Packet: 0x0ae8
	packet_db[0x0ae8].len = 2;

	// Packet: 0x0aec
	packet_db[0x0aec].len = 2;

	// Packet: 0x0aed
	packet_db[0x0aed].len = 2;

	// Packet: 0x0aee
	packet_db[0x0aee].len = 2;

	// Packet: 0x0ae9
	packet_db[0x0ae9].len = 13;

	// Packet: 0x0aef
	packet_db[0x0aef].len = 2;

	// Packet: 0x0af0
	packet_db[0x0af0].len = 10;

	// Packet: 0x0af2
	packet_db[0x0af2].len = 40;

	// Packet: 0x0af3
	packet_db[0x0af3].len = -1;

	// Packet: 0x0af4
	packet_db[0x0af4].len = 11;

	// Packet: 0x0af5
	packet_db[0x0af5].len = 3;

	// Packet: 0x0af6
	packet_db[0x0af6].len = 88;

	// Packet: 0x0af7
	packet_db[0x0af7].len = 32;

	// Packet: 0x0af8
	packet_db[0x0af8].len = 11;

	// Packet: 0x0af9
	packet_db[0x0af9].len = 6;

	// Packet: 0x0afa
	packet_db[0x0afa].len = 54;

	// Packet: 0x0afb
	packet_db[0x0afb].len = -1;

	// Packet: 0x0afd
	packet_db[0x0afd].len = -1;

	// Packet: 0x0b0c
	packet_db[0x0b0c].len = 155;

	// Packet: 0x0afe
	packet_db[0x0afe].len = -1;

	// Packet: 0x0aff
	packet_db[0x0aff].len = -1;

	// Packet: 0x0b00
	packet_db[0x0b00].len = 8;

	// Packet: 0x0b01
	packet_db[0x0b01].len = 56;

	// Packet: 0x0b02
	packet_db[0x0b02].len = 26;

	// Packet: 0x0b03
	packet_db[0x0b03].len = -1;

	// Packet: 0x0b04
	packet_db[0x0b04].len = 90;

	// Packet: 0x0b07
	packet_db[0x0b07].len = -1;

	// Packet: 0x0b08
	packet_db[0x0b08].len = -1;

	// Packet: 0x0b09
	packet_db[0x0b09].len = -1;

	// Packet: 0x0b0a
	packet_db[0x0b0a].len = -1;

	// Packet: 0x0b0b
	packet_db[0x0b0b].len = 4;

	// Packet: 0x0b0d
	packet_db[0x0b0d].len = 10;

	// Packet: 0x0b0e
	packet_db[0x0b0e].len = -1;

	// Packet: 0x0b0f
	packet_db[0x0b0f].len = -1;

	// Packet: 0x0b10
	packet_db[0x0b10].len = 10;

	// Packet: 0x0b11
	packet_db[0x0b11].len = 4;

	// Packet: 0x0b12
	packet_db[0x0b12].len = 2;

	// Packet: 0x0b13
	packet_db[0x0b13].len = 48;

	// Packet: 0x0b14
	packet_db[0x0b14].len = 2;

	// Packet: 0x0b15
	packet_db[0x0b15].len = 7;

	// Packet: 0x0b16
	packet_db[0x0b16].len = 2;

	// Packet: 0x0b17
	packet_db[0x0b17].len = 3;

	// Packet: 0x0b18
	packet_db[0x0b18].len = 4;

	// Packet: 0x0b19
	packet_db[0x0b19].len = 2;

	// Packet: 0x0b1a
	packet_db[0x0b1a].len = 29;

	// Packet: 0x0b1b
	packet_db[0x0b1b].len = 2;

	// Packet: 0x0b1c
	packet_db[0x0b1c].len = 2;

	// Packet: 0x0b1d
	packet_db[0x0b1d].len = 2;

	// Packet: 0x0b1e
	packet_db[0x0b1e].len = 14;

	// Packet: 0x0b1f
	packet_db[0x0b1f].len = 14;

	// Packet: 0x0b20
	packet_db[0x0b20].len = 271;

	// Packet: 0x0b22
	packet_db[0x0b22].len = 5;

	// Packet: 0x0b21
	packet_db[0x0b21].len = 13;

	// Packet: 0x0b24
	packet_db[0x0b24].len = 6;

	// Packet: 0x0b25
	packet_db[0x0b25].len = 6;

	// Packet: 0x0b27
	packet_db[0x0b27].len = -1;

	// Packet: 0x0b28
	packet_db[0x0b28].len = 3;

	// Packet: 0x0b2b
	packet_db[0x0b2b].len = 11;

	// Packet: 0x0b2c
	packet_db[0x0b2c].len = 3;

	// Packet: 0x0b2d
	packet_db[0x0b2d].len = 11;

	// Packet: 0x0b2e
	packet_db[0x0b2e].len = 4;

	// Packet: 0x0b2f
	packet_db[0x0b2f].len = 73;

	// Packet: 0x0b30
	packet_db[0x0b30].len = -1;

	// Packet: 0x0b31
	packet_db[0x0b31].len = 17;

	// Packet: 0x0b32
	packet_db[0x0b32].len = -1;

	// Packet: 0x0b33
	packet_db[0x0b33].len = 17;

	// Packet: 0x0b34
	packet_db[0x0b34].len = 50;

	// Packet: 0x0b35
	packet_db[0x0b35].len = 3;

	// Packet: 0x0b36
	packet_db[0x0b36].len = -1;

	// Packet: 0x0b37
	packet_db[0x0b37].len = -1;

	// Packet: 0x0b39
	packet_db[0x0b39].len = -1;

	// Packet: 0x0b3c
	packet_db[0x0b3c].len = 4;

	// Packet: 0x0b3d
	packet_db[0x0b3d].len = -1;

	// Packet: 0x0b3e
	packet_db[0x0b3e].len = -1;

	// Packet: 0x0b3f
	packet_db[0x0b3f].len = 63;

	// Packet: 0x0b40
	packet_db[0x0b40].len = -1;

	// Packet: 0x0b41
	packet_db[0x0b41].len = 69;

	// Packet: 0x0b42
	packet_db[0x0b42].len = 61;

	// Packet: 0x0b43
	packet_db[0x0b43].len = 47;

	// Packet: 0x0b44
	packet_db[0x0b44].len = 57;

	// Packet: 0x0b45
	packet_db[0x0b45].len = 57;

	// Packet: 0x0b46
	packet_db[0x0b46].len = 10;

	// Packet: 0x0b47
	packet_db[0x0b47].len = 14;

	// Packet: 0x0b48
	packet_db[0x0b48].len = 18;

	// Packet: 0x0b49
	packet_db[0x0b49].len = 4;

	// Packet: 0x0b4a
	packet_db[0x0b4a].len = 6;

	// Packet: 0x0b4b
	packet_db[0x0b4b].len = 4;

	// Packet: 0x0b4c
	packet_db[0x0b4c].len = 2;

	// Packet: 0x0b4d
	packet_db[0x0b4d].len = -1;

	// Packet: 0x0b4f
	packet_db[0x0b4f].len = 2;

	// Packet: 0x0b50
	packet_db[0x0b50].len = 2;

	// Packet: 0x0b51
	packet_db[0x0b51].len = 2;

	// Packet: 0x0b52
	packet_db[0x0b52].len = 2;

	// Packet: 0x0b53
	packet_db[0x0b53].len = 52;

	// Packet: 0x0b54
	packet_db[0x0b54].len = 8;

	// Packet: 0x0b4e
	packet_db[0x0b4e].len = -1;

	// Packet: 0x0b55
	packet_db[0x0b55].len = -1;

	// Packet: 0x0b56
	packet_db[0x0b56].len = -1;

	// Packet: 0x0b57
	packet_db[0x0b57].len = -1;

	// Packet: 0x0b58
	packet_db[0x0b58].len = 2;

	// Packet: 0x0b59
	packet_db[0x0b59].len = 4;

	// Packet: 0x0b5a
	packet_db[0x0b5a].len = -1;

	// Packet: 0x0b5b
	packet_db[0x0b5b].len = 14;

	// Packet: 0x0b5c
	packet_db[0x0b5c].len = 2;

	// Packet: 0x0b5d
	packet_db[0x0b5d].len = 10;

	// Packet: 0x0b5e
	packet_db[0x0b5e].len = 33;

	// Packet: 0x0b5f
	packet_db[0x0b5f].len = -1;

	// Packet: 0x0b60
	packet_db[0x0b60].len = -1;

	// Packet: 0x0b62
	packet_db[0x0b62].len = -1;

	// Packet: 0x0b63
	packet_db[0x0b63].len = -1;

	// Packet: 0x0b64
	packet_db[0x0b64].len = -1;

	// Packet: 0x0b65
	packet_db[0x0b65].len = -1;

	// Packet: 0x0b66
	packet_db[0x0b66].len = 25;

	// Packet: 0x0b67
	packet_db[0x0b67].len = 32;

	// Packet: 0x0b68
	packet_db[0x0b68].len = 12;

	// Packet: 0x0b69
	packet_db[0x0b69].len = 18;

	// Packet: 0x0b6a
	packet_db[0x0b6a].len = -1;

	// Packet: 0x0b6b
	packet_db[0x0b6b].len = 14;

	// Packet: 0x0b6c
	packet_db[0x0b6c].len = 12;

	// Packet: 0x0b6d
	packet_db[0x0b6d].len = 6;

	// Packet: 0x0b6e
	packet_db[0x0b6e].len = 14;

	// Packet: 0x0b6f
	packet_db[0x0b6f].len = 177;

	// Packet: 0x0b70
	packet_db[0x0b70].len = -1;

	// Packet: 0x0b71
	packet_db[0x0b71].len = 177;

	// Packet: 0x0b72
	packet_db[0x0b72].len = -1;

	// Packet: 0x0b73
	packet_db[0x0b73].len = 8;

	// Packet: 0x0b74
	packet_db[0x0b74].len = 1026;

	// Packet: 0x0b75
	packet_db[0x0b75].len = 1026;

	// Packet: 0x0b76
	packet_db[0x0b76].len = 77;

	// Packet: 0x0b77
	packet_db[0x0b77].len = -1;

	// Packet: 0x0b78
	packet_db[0x0b78].len = -1;

	// Packet: 0x0b79
	packet_db[0x0b79].len = -1;

	// Packet: 0x0b7a
	packet_db[0x0b7a].len = -1;

	// Packet: 0x0b7b
	packet_db[0x0b7b].len = 118;

	// Packet: 0x0b7c
	packet_db[0x0b7c].len = -1;

	// Packet: 0x0b7d
	packet_db[0x0b7d].len = -1;

	// Packet: 0x0b7e
	packet_db[0x0b7e].len = 60;

	// Packet: 0x0b7f
	packet_db[0x0b7f].len = 10;

	// Packet: 0x0b80
	packet_db[0x0b80].len = 10;

}
