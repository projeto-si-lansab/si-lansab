#! /usr/bin/env bash
source Configuration_for_Embedding.sh

"$OBJDIR/$EXEC" $DF_SERVER_IP $DF_SERVER_PORT $BROADCAST_GROUP $NETWORK_INTERFACE $BROADCAST_PORT
