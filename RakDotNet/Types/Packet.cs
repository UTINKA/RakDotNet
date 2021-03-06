﻿using System;
using System.Runtime.InteropServices;

namespace RakDotNet
{
    public class Packet
    {
        [DllImport("RakDotNetNative")]
        private static extern uint PacketGetSystemIndex(IntPtr packet);
        [DllImport("RakDotNetNative")]
        private static extern IntPtr PacketGetSystemAddress(IntPtr packet);
        [DllImport("RakDotNetNative")]
        private static extern uint PacketGetLength(IntPtr packet);
        [DllImport("RakDotNetNative")]
        private static extern uint PacketGetBitSize(IntPtr packet);
        [DllImport("RakDotNetNative")]
        private static extern IntPtr PacketGetData(IntPtr packet);
        [DllImport("RakDotNetNative")]
        private static extern IntPtr PacketGetBitStream(IntPtr packet);

        internal IntPtr ptr;
        private IntPtr rakPeerPtr;

        public uint SystemIndex => PacketGetSystemIndex(ptr);
        public SystemAddress SystemAddress => new SystemAddress(PacketGetSystemAddress(ptr));
        public uint Length => PacketGetLength(ptr);
        public uint BitSize => PacketGetBitSize(ptr);
        public byte[] Data
        {
            get
            {
                var len = Length;
                var data = new byte[len];

                Marshal.Copy(PacketGetData(ptr), data, 0, (int)len);

                return data;
            }
        }
        public BitStream BitStream => new BitStream(PacketGetBitStream(ptr));

        internal Packet(IntPtr packet, IntPtr rakPeerInterface)
        {
            ptr = packet;
            rakPeerPtr = rakPeerInterface;
        }

        ~Packet()
        {
            RakPeerInterface.RakPeerInterfaceDeallocatePacket(rakPeerPtr, ptr);
        }
    }
}
