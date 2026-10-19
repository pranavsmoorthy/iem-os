#!/usr/bin/env bash

# Exit immediately if a command fails unexpectedly
set -e

IFACE="vcan0"

case "$1" in
    up|start|on)
        echo "Starting $IFACE..."
        sudo modprobe vcan
        # Create interface if it doesn't already exist
        if ! ip link show "$IFACE" &>/dev/null; then
            sudo ip link add dev "$IFACE" type vcan
        fi
        sudo ip link set "$IFACE" up
        echo "$IFACE is UP and ready."
        ip link show "$IFACE"
        ;;

    down|stop|off)
        echo "Stopping $IFACE..."
        sudo ip link delete dev "$IFACE" 2>/dev/null || true
        echo "$IFACE is DOWN and removed."
        ;;

    status)
        if ip link show "$IFACE" &>/dev/null; then
            echo "$IFACE is currently ACTIVE:"
            ip link show "$IFACE"
        else
            echo "$IFACE is INACTIVE (does not exist)."
        fi
        ;;

    *)
        echo "Usage: ./scripts/vcan.sh {up|down|status}"
        exit 1
        ;;
esac